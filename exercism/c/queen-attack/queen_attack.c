#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    bool queen_rows_invalid = queen_1.row > 7 || queen_2.row > 7;
    bool queen_columns_invalid = queen_1.column > 7 || queen_2.column > 7;

    if (queen_rows_invalid || queen_columns_invalid) {
        return INVALID_POSITION;
    } else if (queen_1.row == queen_2.row && queen_1.column == queen_2.column) {
        return INVALID_POSITION;
    }

    if (queen_1.row == queen_2.row) {
        return CAN_ATTACK;
    } else if (queen_1.column == queen_2.column) {
        return CAN_ATTACK;
    }

    for (int i = 1; i <= 8; i++) {
        int col_left = queen_1.column - i;
        int col_right = queen_1.column + i;
        int row_down = queen_1.row - i;
        int row_up = queen_1.row + i;

        bool cols_match = col_left == queen_2.column || col_right == queen_2.column;
        bool rows_match = row_up == queen_2.row || row_down == queen_2.row;
        if (cols_match && rows_match) {
            return CAN_ATTACK;
        }
    }

    return CAN_NOT_ATTACK;
}