#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int palindrom_rec(const char* p, const char* k);

int palindrom(const char* str) {
    return palindrom_rec(str, str + strlen(str) - 1);
}

int palindrom_rec(const char* p, const char* k) {
    if (p >= k) {
        return 1;
    } else if (*p != *k) {
        return 0;
    } else {
        return palindrom_rec(p + 1, k - 1);
    }
}

int main(void) {
    const char str_pal1[] = "kajak";
    const char str_pal2[] = "ala";
    const char str_pal3[] = "kuba";
    const char str_pal4[] = "kot";
    const char str_pal5[] = "potop";

    printf("Czy wyraz \"%s\" jest palindromem: %s\n", str_pal1, palindrom(str_pal1) ? "Tak" : "Nie");
    printf("Czy wyraz \"%s\" jest palindromem: %s\n", str_pal2, palindrom(str_pal2) ? "Tak" : "Nie");
    printf("Czy wyraz \"%s\" jest palindromem: %s\n", str_pal3, palindrom(str_pal3) ? "Tak" : "Nie");
    printf("Czy wyraz \"%s\" jest palindromem: %s\n", str_pal4, palindrom(str_pal4) ? "Tak" : "Nie");
    printf("Czy wyraz \"%s\" jest palindromem: %s\n", str_pal5, palindrom(str_pal5) ? "Tak" : "Nie");

    return EXIT_SUCCESS;
}
