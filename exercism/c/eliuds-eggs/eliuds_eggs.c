#include "eliuds_eggs.h"

unsigned int egg_count(int display)
{
    int eggs = 0;

    while (display > 0)
    {
        int remainder = display % 2;
        int binary = remainder * 1;
        eggs += binary;
        display = display / 2;
    }

    return eggs;
}
