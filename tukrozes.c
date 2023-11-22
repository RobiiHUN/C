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


Fa *tukrozes(Fa *gyoker){
    if (gyoker == NULL)
    {
        return NULL;
    }
    Fa *csere = gyoker->bal;
    gyoker->bal = tukrozes(gyoker->jobb);
    gyoker->jobb = tukrozes(csere);

    return gyoker;
    
}

int main(void){
    Fa *gyoker = NULL;
    int minta[13] = {15, 96, 34, 12, 14, 56, 21, 11, 10, 9, 78, 43, 0};

    for (int i = 0; i < 13; i++)
    {
        if (i == 0)
        {
            gyoker = ertekbe(gyoker, minta[i]);
        }else{
            ertekbe(gyoker, minta[i]);
        }
    }
   
    Fa *tukrozott = tukrozes(gyoker);
    bejaras(gyoker);
    printf("\n");
    bejaras(tukrozott);
    printf("\n");


    fafelsz(gyoker);

 



    return 0;
}