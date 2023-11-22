#include <stdio.h>

void csoportositas(int szam){
    if(szam < 1000){
        printf("%d", szam); //kisebb mint 2 jegy
    }
    else{
        csoportositas(szam / 1000);
        printf(" %3d", szam % 1000);
    }

}

int main(void){
    int kiirando_szamok[] = {999, 1000, 12, 0, 1000222};

    for (int i = 0; i < 5; i++)
    {
        printf("A csoportositott int: ");
        csoportositas(kiirando_szamok[i]);
        printf("\n\n");
    }
    
    return 0;
} 