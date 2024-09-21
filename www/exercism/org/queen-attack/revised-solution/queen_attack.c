#include "queen_attack.h"

bool is_valid_position(position_t queen_1, position_t queen_2) {
    bool queen_rows_invalid = queen_1.row > 7 || queen_2.row > 7;
    bool queen_columns_invalid = queen_1.column > 7 || queen_2.column > 7;
    bool queen_on_same_position = queen_1.row == queen_2.row && queen_1.column == queen_2.column;

    return !queen_rows_invalid && !queen_columns_invalid && !queen_on_same_position;
}

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    bool is_valid_pos = is_valid_position(queen_1, queen_2);

    if (!is_valid_pos) {
        return INVALID_POSITION;
    }

    bool on_same_row = queen_1.row == queen_2.row;
    bool on_same_column = queen_1.column == queen_2.column;
    bool on_same_diagonal_line = abs(queen_1.row - queen_2.row) == abs(queen_2.column - queen_1.column);
    
    if (on_same_row || on_same_column || on_same_diagonal_line) {
        return CAN_ATTACK;
    }

    return CAN_NOT_ATTACK;
}