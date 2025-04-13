#include "mymem.h"

#include <stdlib.h>
#include <assert.h>

int* create_sequence(size_t n) {
    int* seq = (int*) malloc(n * sizeof(int));


    if (seq != NULL) {
        for (size_t i = 0; i < n; ++i) {
            seq[i] = (int) (i + 1);
        }
    }
    return seq;
}
