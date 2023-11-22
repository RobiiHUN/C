#include <stdio.h>

void atvalt(int szam, int szamrenddszer){
    if (szam == 0){
        return;
    }

    int akt_szamjegy = szam % szamrenddszer;
    atvalt (szam/szamrenddszer, szamrenddszer);
    printf("%d", akt_szamjegy);
}

int main(void){
    int szam = 123;
    int szamrendszer = 2;

    printf("A szam %d szamrendszerben: ", szamrendszer);
    atvalt(szam, szamrendszer);
    printf("\n");
    return 0;
}