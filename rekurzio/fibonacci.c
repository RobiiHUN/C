#include <stdio.h>

long long fibonacci(int n){
    if (n < 2)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n = 5;
    printf("A vegeredmeny: %lld", fibonacci(n));
    return 0;
}