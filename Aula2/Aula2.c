// Organização da memória do seu programa no computador.
// Cada região está organizada dentro de blocos de 4kB (dependendo do sistema)
// para garantir o alinhamento entre os blocos de memória do programa.
// +---------------------+  <- Endereços mais baixos
// |     Code (TEXT)     |  <- Código do programa
// |---------------------|
// |   Data (inicial.)   |  <- Variáveis globais/estáticas inicializadas ** Essa região está colada no bloco de código porque precisa ser copiada para a memória principal durante o carregamento do programa.**
// |---------------------|
// |   BSS (zerada)      |  <- Variáveis globais/estáticas NÃO inicializadas (BSS: Block Started by Symbol, isto é, região alocada representada apenas por símbolos e não por valores que precisam de inicialização da memória) ** Essa região está em um bloco mais afastada do bloco de código devido a não ser necessário ser copiada para a memória, apenas ser zerada e disponibilizada pelo sistema operacional durante a execução do nosso programa.**
// |---------------------|
// |      Heap           |  <- Memória alocada dinamicamente (malloc, new) - Heap significa amontoado (empilhamento desordenado).
// |---------------------|
// |      Stack          |  <- Variáveis locais, frames de função
// +---------------------+  <- Endereços mais altos

// Os blocos podem ser carregados em diferentes posições da memória devido à
// paginação do SO e ao  ASLR (Address Space Layout Randomization).

#include <stdio.h>

int variavel1 = 65536;

void imprime(void);

int main() {

    printf("Endereço variavel1: %p\n", (void*)&variavel1);
    printf("Valor variavel1: %d\n", variavel1);

    imprime();

    // Mantém o programa aberto para análise do consumo de memória no Gerenciador de Tarefas
    getchar();
    return 0;
}

void imprime() {
    int variavel2 = 1000;

    printf("Endereço variavel2: %p\n", (void*)&variavel2);
    printf("Valor variavel2: %d\n", variavel2);
    
    // Calcula a distância em KB entre a variável global e a local
    int distancia = (void*)&variavel1 - (void*)&variavel2;
    printf("Distância entre variavel1 e variavel2: %.0f kB\n", distancia / 1024.0);
}