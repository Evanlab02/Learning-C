#include "space_age.h"

// Array to hold the orbital periods of each planet relative to Earth's year
static const float planetary_years[PLANET_COUNT] = {
    [MERCURY] = 0.2408467,
    [VENUS] = 0.61519726,
    [EARTH] = 1.0,
    [MARS] = 1.8808158,
    [JUPITER] = 11.862615,
    [SATURN] = 29.447498,
    [URANUS] = 84.016846,
    [NEPTUNE] = 164.79132
};

// Number of seconds in an Earth year
static const float EARTH_YEAR_SECONDS = 31557600.0;

float age(planet_t planet, int64_t seconds) 
{
    if (planet >= PLANET_COUNT) {
        return -1.0; // Error handling for invalid planet enum value
    }

    float age_on_earth = seconds / EARTH_YEAR_SECONDS;
    return age_on_earth / planetary_years[planet];
}