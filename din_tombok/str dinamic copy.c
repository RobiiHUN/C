#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//masolo fgv

char *masol(const char *eredeti_str){
    size_t hosszusag = strlen(eredeti_str);

    //malloc din. tomb
    char *uj_str = malloc((hosszusag + 1) * sizeof (char));

    // megvizsgaljuk az str-t majd megtortenik a masolas
    if (uj_str != NULL){
        strcpy(uj_str, eredeti_str);
    }
    return uj_str;

}

int main(void){
    // str letrehozasa
    const char *masolando = "Szia";
    char * masolt = masol(masolando);

    // kiiratas

    printf("Eredeti szöveg: %s\n", masolando);
    printf("Masolat: %s\n", masolt);

    free(masolt);
    

    return 0;
}