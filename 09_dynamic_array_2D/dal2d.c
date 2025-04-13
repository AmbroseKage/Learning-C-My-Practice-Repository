#include <stdlib.h>
#include <stdio.h>
 
int main(void) {
    char** str2d = malloc(3 * sizeof(char*));
    str2d[0] = "Oto";
    str2d[1] = "tablica";
    str2d[2] = "dynamiczna.";
 
    for (size_t i = 0; i < 3; ++i) {
        printf("%s\n", str2d[i]);
    }
 
    free(str2d);
 
    return EXIT_SUCCESS;
}