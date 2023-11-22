#include <stdio.h>

void kocka(double oldal){
    printf("A kocka terfogata %lf, a kocka felszine %lf", oldal * oldal * oldal, 6 * oldal * oldal);


}

int main(){
    double a = 2.7;
    kocka(a);

    return 0;
}