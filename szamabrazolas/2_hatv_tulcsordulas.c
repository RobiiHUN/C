#include <stdio.h>
#include <limits.h>

int main() {
    unsigned int hatvany_ertek = 1;
    int lefutas = 0;

    while (hatvany_ertek > 0) {
        printf("2^%d = %u\n", lefutas, hatvany_ertek);
        hatvany_ertek <<= 1;
        lefutas = lefutas + 1;
    }

    printf("A ciklus %d lepes utan allt le.\n", lefutas);

    return 0;
}
