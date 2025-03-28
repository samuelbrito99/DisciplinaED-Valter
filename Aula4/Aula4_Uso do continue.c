/* EXPLICAÇÃO uso do CONTINUE */
// Somando números positivos em um vetor.

#include <stdio.h>

int main() {
    int numeros[] = {10, -5, 7, -3, 8, -1, 6};  
    int soma = 0;

    for (int i = 0; i < 7; i++) {
        if (numeros[i] < 0)
            continue; // Ignora números negativos
        
        soma += numeros[i];
    }

    printf("A soma dos números positivos é: %d\n", soma);
    return 0;
}

/*
EXERCÍCIO:
Implemente um programa em C que percorra um vetor de números 
inteiros e calcule a soma de todos os números primos presentes
 nele. Caso um número não seja primo, ele deve ser ignorado. 
 Exiba o resultado da soma ao final da execução.
*/
