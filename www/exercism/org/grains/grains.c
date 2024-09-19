#include "grains.h"

uint64_t square(uint8_t index)
{
    if (index < 1 || index > 64)
    {
        return 0;
    }
    
    uint64_t result = 1;

    for (uint8_t i = 1; i < index; i++)
    {
        result *= 2;
    }

    return result;
}

uint64_t total() {
    uint64_t result = 0;

    for (uint8_t i = 1; i <= 64; i++)
    {
        result += square(i);
    }

    return result;
}