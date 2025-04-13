#define __USE_MINGW_ANSI_STDIO 1
 
#include <stdlib.h>
#include <stdio.h>
 
int main(void) {
  
    const size_t n = 10;
 
    double* tab = (double*) malloc(n * sizeof(*tab));
 
    for (size_t i = 0; i < n; i++) {
        tab[i] = rand() % 101;
    }
 
    tab = realloc(tab, 2 * n * sizeof(*tab));
    for (size_t i = n; i < 2 * n; ++i) {
        tab[i] = 0;
    }
 
    for (size_t i = 0; i < 2 * n; ++i) {
        printf("%3zu: %.2f\n", i, tab[i]);
    }
 
    free(tab);
 
    return EXIT_SUCCESS;
}