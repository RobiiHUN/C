#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* sor_beolvaso(){
    char nagyon_hosszu_sor[1000];
    printf("Ird be a nagyon-nagyon hosszu sorodat!  \n");

    gets(nagyon_hosszu_sor);
    char* cim = strdup(nagyon_hosszu_sor);

    return cim;


}
int main(){
    char* beolvasott = sor_beolvaso();
    printf("Beolasott sor: %s\n", beolvasott);







    return 0;
}
// ha ures akkor csak EGY /0-t tartalmaz
