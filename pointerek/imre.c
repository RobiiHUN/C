#include <stdio.h>
#include <string.h>

int main() {
    char nev[100]; //buffer
    printf("Kerem adjon meg egy keresztnevet: ");
    scanf("%s", nev);

    int hossz = strlen(nev);

    printf("Betuk fuggolegesen lefele:\n");
    for (int i = 0; i < hossz; i++) {
        printf("%c\n", nev[i]);
    }

    return 0;
}
