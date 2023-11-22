#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *kivag(const char *be_str, int kezdo, int vege){

    int hossz = strlen(be_str);
    int uj_hosszusag = vege - kezdo;
    
    // malloc lefoglaljuk a helyet + 1 a lezaro 0-nak
    char *kivagott_str = malloc(uj_hosszusag + 1);

    // copy
    strncpy(kivagott_str, be_str + kezdo, uj_hosszusag);
    
    // a nulla hozzadasa
    kivagott_str[uj_hosszusag] = '\0';
    
    return 0;

}

int main(){
    const char *szoveg = "Ez szerintem jo lesz ide";

    // megadjuk az intervallumot
    char *kivagott_str = kivag(szoveg, 2, 10);

    printf("Kivagott str: %s ", kivagott_str);
    free(kivagott_str);


    return 0;
}