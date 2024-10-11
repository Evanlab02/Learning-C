#include "darts.h"

int CENTER_X = 0;
int CENTER_Y = 0;
int SQUARED_RADIUS = 10 * 10;
int SQUARED_MIDDLE_RADIUS = 5 * 5;
int SQUARED_INNER_RADIUS = 1 * 1;

float get_coordinate_results(coordinate_t pos) {
    float x = pos[0];
    float y = pos[1];

    float x_result = x - CENTER_X;
    float y_result = y - CENTER_Y;
    
    float x_result_squared = x_result * x_result;
    float y_result_squared = y_result * y_result;
    float results = x_result_squared + y_result_squared;
    return results;
}

uint8_t score(coordinate_t pos) {
    float results = get_coordinate_results(pos);

    bool is_on_target = results <= SQUARED_RADIUS;
    bool is_on_middle_target = results <= SQUARED_MIDDLE_RADIUS;
    bool is_on_inner_target = results <= SQUARED_INNER_RADIUS;

    if (is_on_inner_target) {
        return 10;
    } else if (is_on_middle_target) {
        return 5;
    } else if (is_on_target) {
        return 1;
    }

    return 0;
}
