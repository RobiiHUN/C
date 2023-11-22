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

//elemek szama
int szamlalo(Fa *gyoker){
    if (gyoker == NULL)
    {
        return 0;
    }
    return 1 + szamlalo(gyoker->bal) + szamlalo(gyoker->jobb);   
}

//osszegek
int osszegek(Fa *gyoker){
    if (gyoker == NULL){
        return 0;
    }
    return gyoker -> ertek + osszegek(gyoker -> bal) + osszegek(gyoker->jobb);   
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
    printf("\nA fa elemei:  %d\n", szamlalo(gyoker));
    printf("A fa eleeinek osszege: %d\n\n\n", osszegek(gyoker));



    fafelsz(gyoker);



    return 0;
}