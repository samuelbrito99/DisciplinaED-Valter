#include <stdio.h>

int eh_numero_perfeito(int num);
void numeros_perfeitos_ate(int numero);

void main(){

    int num =0;
    
    printf("\n\tDigite um número para saber se ele é perfeito:\n\t>> ");
    scanf("%d%*c", &num);

    if(eh_numero_perfeito(num))
        printf("Ele é perfeito!\n");
    else    
        printf("Ele NÃO é perfeito...\n");

    numeros_perfeitos_ate(200000);

    return 0;
}

void numeros_perfeitos_ate(int numero){
    printf("\nOs números perfeitos até %d são...\n", numero);

    for(int i = 1; i <= numero; i++)    
        if(eh_numero_perfeito(i))
            printf("\t>> %d\n", i);
}


int eh_numero_perfeito(int num){

    int soma_divisores = 0;

    for(int i = 1; i < num; i++)
        if (num % i == 0)
            soma_divisores += i;

    if(soma_divisores == num)
        return 1;
    else    
        return 0;
}