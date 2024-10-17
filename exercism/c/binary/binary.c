#include "binary.h"

int convert(const char *input)
{
    const int BASE = 2;
    const int LEN_OF_INPUT = strlen(input);
    int result = 0;

    for (int i = 0; i < LEN_OF_INPUT; i++)
    {
        if (input[i] != '0' && input[i] != '1')
        {
            return INVALID;
        }

        int power = (LEN_OF_INPUT - 1) - i;
        int binary = input[i] == '0' ? 0 : 1;
        result += binary * pow(BASE, power);
    }

    return result;
}