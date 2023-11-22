#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *beszur(const char *szoveg, int cel, const char *beszurando_str ){
    int szoveg_hossza = strlen(szoveg);
    int beszurando_szoveg_h = strlen(beszurando_str);

    int uj_h = szoveg_hossza + beszurando_szoveg_h + 1;

    char *uj_str = malloc(uj_h);

    strcpy(uj_str, szoveg, cel);
    uj_str[cel] = '\0';

    strcat(uj_str, beszurando_str);
    strcat(uj_str, szoveg + cel);

    return uj_str;


}

int main(){
    const char *szoveg = "Hello!";
    const char *beillesztendo = "Vilag";

    char *egyesitett = beszur(szoveg, 5, beillesztendo);

    printf("%s", egyesitett);

    free(egyesitett);

    return 0;

}