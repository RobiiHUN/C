#include <stdio.h>

int main() {
    
    double szamlalo = 4.0 + 2.0 -(3.0-( 6.0 + 4.0 / 5.0));
    double nevezo = 3.0 * (2.0 - 7.0);
    double vegeredmeny = szamlalo / nevezo;


    // Kiírás két tizedesjegyig pontossággal
    printf("Az eredmeny: %f\n", vegeredmeny);

    return 0;
}