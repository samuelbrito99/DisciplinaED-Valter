#include <stdio.h>

int fatorial(int n);

int main(void){

    int num = 0;

    printf("\nDigite um número para calcular o fatorial: ");
    scanf("%d", &num);
    
    printf("%d! = %d", num, fatorial(num));

    return 0;
}

int fatorial( int n){
    if(n == 0)
        return 1;
    else
        return n* fatorial(n-1);
}