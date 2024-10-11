#ifndef DARTS_H
#define DARTS_H

#include <stdbool.h>
#include <stdint.h>
#include <math.h>

typedef float coordinate_t[2];

float get_coordinate_results(coordinate_t pos);
uint8_t score(coordinate_t pos);

#endif
