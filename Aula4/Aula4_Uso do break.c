/* EXPLICAÇÃO uso do BREAK */
// Procurando o índice de um número em um vetor.

#include <stdio.h>

int main() {
    int numeros[] = {1, 3, 6, 7, 15, 22, 100};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int busca = 9;
    int encontrado = 0;

    for (int i = 0; i < tamanho && numeros[i] <= busca; i++) {
        if (numeros[i] == busca) {
            printf("Número %d encontrado na posição %d.\n", busca, i);
            encontrado = 1;
            break; // Interrompe o loop quando encontra o número
        }

    }

    if (!encontrado) {
        printf("Número %d não encontrado.\n", busca);
    }

    return 0;
}

/*
EXERCÍCIO
Implemente um programa em C que, dado um vetor ordenado de números inteiros,
 realize uma busca eficiente por um número fornecido pelo usuário. 
 Se o número estiver presente, exiba seu índice; caso contrário, informe 
 que ele não foi encontrado.
*/