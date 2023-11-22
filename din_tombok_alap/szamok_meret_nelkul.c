#include <stdio.h>
#include <stdlib.h>
#include "debugmalloc.h"

int main(){

    int meret_vegl = 0;
    int meret_kezd = 2;
    double *szamok_tomb = (double *)malloc(meret_kezd * sizeof(double));

    printf("Ird be a szamokat!\n");


    double bemenet;
    while (EOF)
    {
        if (meret_vegl >= meret_kezd)
        {
            meret_kezd = meret_kezd + 1;
            szamok_tomb = (double *)realloc(szamok_tomb, meret_kezd * sizeof(double));
        }
        if (scanf("%lf", &bemenet) == 1){
            szamok_tomb[meret_vegl] = bemenet;
            meret_vegl++;
        }else{
            break;
        }
    }
    printf("A beolvasott szamok visszafele: \n");
    for (int i = meret_vegl - 1; i >= 0; i--)
    {
        printf("%.0f ", szamok_tomb[i]);
    }

    free(szamok_tomb);




    return 0;

}
