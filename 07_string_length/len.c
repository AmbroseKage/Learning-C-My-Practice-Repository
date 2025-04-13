#include <stdio.h>
#include <stdlib.h>

unsigned long dlugosc(const char* str) {
    unsigned long len = 0;

    while (str[len] != '\0') {
        ++len;
    }

    return len;
}

int main(void) {
    char str[] = "Jaka mam dlugosc?";
    printf("Dlugosc lancucha \"%s\" wynosi %ld.\n", str, dlugosc(str));

    return EXIT_SUCCESS;
}
