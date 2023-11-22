#include <stdio.h>
#include <stdlib.h>
#include "debugmalloc.h"


typedef struct Fa
{
    int ertek;
    struct Fa *bal, *jobb;
}Fa;

//bejaras es kiiratas
void bejaras(Fa *gyoker){
    if (gyoker != NULL){
        bejaras(gyoker ->jobb);
        printf(" %d", gyoker ->ertek);
        bejaras(gyoker ->bal);
    }
}

//fa felszabaditasa
void fafelsz(Fa *gyoker){
    if (gyoker != NULL)
    {
        fafelsz(gyoker->jobb);
        fafelsz(gyoker->bal);
        free(gyoker);
    }
    
}


//fa, adat be
Fa* ertekbe(Fa *gyoker, int ertek){
    if (gyoker == NULL){
        Fa *ujertek = malloc(sizeof(Fa));
        ujertek->ertek = ertek;
        ujertek->bal = NULL;
        ujertek->jobb = NULL;
        return ujertek;

    }

    if(ertek < gyoker->ertek){
        gyoker->jobb = ertekbe(gyoker->jobb, ertek);
    }
    else if(ertek > gyoker->ertek){
        gyoker->bal = ertekbe(gyoker -> bal, ertek);
    }
    return gyoker;
}

int main(void){
    Fa *gyoker = NULL;

    gyoker = ertekbe(gyoker, 7);
    ertekbe(gyoker, 2);
    ertekbe(gyoker, 5);

    printf("A fa:\n");
    bejaras(gyoker);
    printf("\n");

    fafelsz(gyoker);

    return 0;
}