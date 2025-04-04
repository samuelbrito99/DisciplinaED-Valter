/*
EXERCÍCIO passagem de parâmetros por linha de comando:
Crie um programa em C que receba dois números como argumentos na linha de comando 
e exiba a soma deles. Caso a quantidade de argumentos seja insuficiente ou excessiva,
 exiba mensagens apropriadas.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    switch (argc)
    {
    case 1:
        printf("\nVocê não entrou com os operandos...");
        break;
    
    case 2:
        printf("\nFaltou o segundo operando...");
        break;
    case 3:
        float a = atof(argv[1]);
        float b = atof(argv[2]);
        printf("%.2f + %.2f = %.2f\n", a, b, a+b);
    default:
        printf("\nVocê não digitou o númeor de parâmetros esperados.\n");
    }

    return 0;
}