#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number) 
{
    unsigned int iterator = 1;
    unsigned int total = 0;
    
    while (iterator <= number)
    {
        total += iterator * iterator;
        iterator++;
    }
    
    return total;
}

unsigned int square_of_sum(unsigned int number) 
{
    unsigned int iterator = 1;
    unsigned int total = 0;

    while (iterator <= number) 
    {
        total += iterator;
        iterator++;
    }

    return total * total;
}

unsigned int difference_of_squares(unsigned int number)
{
    return square_of_sum(number) - sum_of_squares(number);
}