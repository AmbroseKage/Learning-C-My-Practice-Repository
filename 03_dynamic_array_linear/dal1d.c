#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    const size_t n = 10;
 
    double* tab = (double*) malloc(n * sizeof(*tab));
 
    for (size_t i = 0; i < n; ++i) {
        tab[i] = rand() % 101;
    }
 
    for (size_t i = 0; i < n; ++i) {
        printf("%3zu: %.2f\n", i, tab[i]);
    }
 
    free(tab);
 
    return EXIT_SUCCESS;
}