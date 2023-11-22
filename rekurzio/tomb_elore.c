#include <stdio.h>


void itarativ_elore(int tomb[], int meret){
    for (int i = 0; i < meret; i++)
    {
        printf("%d", tomb[i]);
    }
    printf("\n");
}

void rekurziv_elore(int tomb[], int meret, int index){
    if (index < meret)
    {
        printf("%d", tomb[index]);
        rekurziv_elore(tomb, meret, index + 1);
    }
    
}

void iterativ_hatra(int tomb[], int meret){
    for (int i = meret; i > 0; i--)
    {
        printf("%d", tomb[i]);
    }
    printf("\n");
    
}

void rekurz_hatra(int tomb[], int meret, int index){
    if (index >= 0)
    {
        printf("%d", tomb[index]);
        rekurz_hatra(tomb, meret, index - 1);
    }
    
}

int main(void){
    int lista1[5] = {1, 42, 53, 35, 23};
    int lista2[5] = {343, 234, 12, 1 ,3};

    itarativ_elore(lista1, 5);
    rekurziv_elore(lista1, 5, 0);
    printf("\n");
    iterativ_hatra(lista2, 5);
    
    rekurz_hatra(lista2, 5, 3);







    return 0;
}