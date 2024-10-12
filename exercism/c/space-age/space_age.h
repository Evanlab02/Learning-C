#ifndef SPACE_AGE_H
#define SPACE_AGE_H

#include <stdint.h>

// Enum containing all planets that we are mapping values to.
typedef enum planet {
   MERCURY,
   VENUS,
   EARTH,
   MARS,
   JUPITER,
   SATURN,
   URANUS,
   NEPTUNE,
   PLANET_COUNT
} planet_t;

/**
 * Determine the space age on an planet using seconds.
 * 
 * @param planet Planet that we determing the age for.
 * @param seconds How old you are in seconds.
 * 
 * @return Float indicating your age on the planet provided.
 */
float age(planet_t planet, int64_t seconds);

#endif
