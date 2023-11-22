#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *hozzafuz(const char *x, const *y){
    // osszeadjuk a ket str hosszat
    size_t uj_hossz = strlen(x) + strlen(y);

    //malloc
    char *uj_str = malloc(uj_hossz + 1);

    
    //masolas majd hozzafuzzuk
    strcpy(uj_str, x);
    strcat(uj_str, y);

    return uj_str;


}

int main(){
    char *x = "dio";
    x = hozzafuz(x, "fa");
    printf("%s", x);

    free(x);


    return 0;
}