#include <stdio.h>

void kiirBit(unsigned long int konv_szam) {
    int meret_szam = sizeof(konv_szam) * 8 -1;  // bit szamlalas majd -1, az index miatt

    
    for (int i = meret_szam - 1; i >= 0; i--) {
        if (konv_szam & (1UL << i)) {
            printf("#");
        } else {
            printf(" ");
        }

        
    }
    printf("\n");
}

int main() {
    unsigned long szamok[8] = { 0U, 1931988508U, 581177634U, 581374240U,
                            581177632U, 581177634U, 1919159836U, 0U };
    
    for (int i = 0; i < 8; i++)
    {
        kiirBit(szamok[i]);
    }
    
    
    
    

    return 0;
}
