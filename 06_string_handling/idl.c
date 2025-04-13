#include <stdio.h>
#include <string.h>

int main() {
    char imie[50], nazwisko[50];

    printf("Podaj imie i nazwisko: ");
    scanf("%s %s", imie, nazwisko);

    printf("%s %s\n", imie, nazwisko);

    int dlugosc_imienia = strlen(imie);
    int dlugosc_nazwiska = strlen(nazwisko);

    printf("%d %d\n", dlugosc_imienia, dlugosc_nazwiska);

    return 0;
}
