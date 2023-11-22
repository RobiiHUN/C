#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#include "debugmalloc.h"
 
int main(void) {
    char txt[] = "hello";
 
    char *p = malloc((strlen(txt) + 1) * sizeof(char)); // elso hiba: nincs heoly a lezaro 0-nak
    strcpy(p, txt);
    printf("TXT: %s\n", p);

    free(p); // lemaradt a free
 
    return 0;

    
}