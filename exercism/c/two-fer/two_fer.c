#include "two_fer.h"

void two_fer(char *buffer, const char *name)
{
    if (name == NULL)
    {
        name = "you";
    }

    snprintf(buffer, 100, "One for %s, one for me.", name);
}