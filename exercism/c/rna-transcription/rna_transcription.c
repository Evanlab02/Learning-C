#include "rna_transcription.h"

char *to_rna(const char *dna)
{
    // Allocate memory for the RNA string (+1 for the null terminator)
    char *rna = malloc(strlen(dna) + 1);
    if (!rna) {
        // If memory allocation fails
        return NULL;
    }

    // Transcribe each nucleotide from DNA to RNA
    for (int i = 0; dna[i] != '\0'; i++) {
        switch (dna[i]) {
            case 'G':
                rna[i] = 'C';
                break;
            case 'C':
                rna[i] = 'G';
                break;
            case 'T':
                rna[i] = 'A';
                break;
            case 'A':
                rna[i] = 'U';
                break;
            default:
                // Free allocated memory if an invalid nucleotide is encountered
                free(rna);
                return NULL;  // Return NULL to indicate failure
        }
    }

    // Null-terminate the RNA string
    rna[strlen(dna)] = '\0';
    
    return rna;
}
