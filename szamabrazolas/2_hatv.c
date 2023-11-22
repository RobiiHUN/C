#include <stdio.h>

int main(){
    unsigned int hatvany_ertek = 1;
    
    for (int i = 0; i < 50; i++)
    {
        printf("2^%d = %u\n", i, hatvany_ertek);
        hatvany_ertek <<= 1;
    }
    


    return 0;
}