#include <stdio.h>
#include <stdlib.h>

void imprime(float a);

int main(void){

    for(int i=0; i< 10; i++)
        imprime((float)rand());

    return 0;
}

void imprime(float a){
    static int cont=0;
    printf("%d : %.2f ", cont, a);
    cont++;
    if(cont % 5 == 0) printf("\n");
}