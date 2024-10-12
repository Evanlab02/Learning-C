#include "hamming.h"

int compute(const char *lhs, const char *rhs)
{
    int length_of_lhs = strlen(lhs);
    int length_of_rhs = strlen(rhs);

    if (length_of_lhs != length_of_rhs) {
        return -1;
    }

    int length_of_dna = length_of_lhs;

    int dna_comparison_result = 0;
    for (int i = 0; i < length_of_dna; i++) {
        if (lhs[i] != rhs[i]) {
            dna_comparison_result += 1;
        }
    }

    return dna_comparison_result;
}