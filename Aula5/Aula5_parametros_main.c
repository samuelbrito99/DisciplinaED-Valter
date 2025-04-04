/* EXPLICAÇÃO */
// Passagem de parâmetro por linha de comando.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    switch(argc){
        case 1:
            printf("Você não digitou parâmetros...\n");
        break;
        default:
            printf("Os parâmetros foram:\n");
            for(int i = 0; i < argc; i++){
                printf("%s\n",argv[i]);
            }    
    }

    return 0;
}

/*
EXERCÍCIO passagem de parâmetros por linha de comando:
Crie um programa em C que receba dois números como argumentos na linha de comando 
e exiba a soma deles. Caso a quantidade de argumentos seja insuficiente ou excessiva,
 exiba mensagens apropriadas.
*/