#include <stdio.h>

#define f(j) j*j+j+1
#define maior(a,b) ((a)>(b)?(a):(b))

int main(void){

    float a = 0, b=0, x=0;

    printf("\nDigite um número para calcular f(x)=x^2+x+1: ");
    scanf("%f%*c", &x);

    printf("f(%.2f) = %.2f", x, f(x)); 
    
    printf("\nDigite dois números separados por espaço: ");
    scanf("%f %f%*c", &a, &b);

    printf("O maior: %.2f", maior(a,b)); 

    return 0;
}

int fatorial( int n){

    if(n == 0)
        return 1;
    else
        return n* fatorial(n-1);
}