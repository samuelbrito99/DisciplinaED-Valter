#include <stdio.h>

double variavel1 = 65536;

void imprime(void);

int main(){


    printf("Bytes usados pela variavel1: %d\n", sizeof(variavel1));
    printf("Endereço: %x\n", &variavel1);
    printf("Valor: %f\n", variavel1);
    imprime();

    return 0;
}

void imprime(){
    int variavel2 = 1000;
    printf("Endereço: %x\n", &variavel2);
    printf("Valor variável2: %d\n", variavel2);   
}