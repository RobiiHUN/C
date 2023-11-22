#include <stdio.h>

int hosszmero(int lista[]){
    int hossz = 0;
    while (lista[hossz] != '\0')
    {
        hossz++;
    }
    return hossz;
    
}

int main(){

    int szamok[] = {1,4,4,6,4, '\0'};
    int hossz = hosszmero(szamok);
    printf("%d", hossz);


    return 0;
}