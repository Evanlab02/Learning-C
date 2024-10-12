#ifndef RNA_TRANSCRIPTION_H
#define RNA_TRANSCRIPTION_H

#include <stdlib.h>  // For malloc
#include <string.h>  // For strlen

/**
 * Transcribe DNA to its RNA value.
 * 
 * `G` -> `C`
 * `C` -> `G`
 * `T` -> `A`
 * `A` -> `U`
 * 
 * @param dna The DNA value we want to transcribe. Can only contain G, C, A, and T nucleotides.
 * @return The RNA value for the given DNA. Can only contain G, C, A, and U nucleotides, or NULL on failure.
 */
char *to_rna(const char *dna);

#endif
