#include <stdio.h>

int main() {
    int numeros[] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int busca = 5;
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