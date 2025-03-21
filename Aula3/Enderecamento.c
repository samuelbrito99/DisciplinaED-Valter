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

int global_init = 10;       // Variável global inicializada -> DATA
static int static_init = 20; // Variável estática inicializada -> DATA

int global_var;             // Variável global NÃO inicializada -> BSS
static int static_var;      // Variável estática NÃO inicializada -> BSS

int main() {
    int local_var = 30;  // Variável local -> STACK

    // Impressão dos endereços
    printf("Endereços ne memória principal:\n");
    
    printf("global_init (DATA) : %p\n", (void*)&global_init);
    printf("static_init (DATA) : %p\n", (void*)&static_init);

    printf("global_var  (BSS)  : %p\n", (void*)&global_var);
    printf("static_var  (BSS)  : %p\n", (void*)&static_var);

    printf("local_var   (STACK): %p\n", (void*)&local_var);

    // Cálculo da diferença de endereços entre BSS e DATA
    int diff_bss_data = (void*)&global_var - (void*)&global_init;
    printf("\nDistância entre BSS e DATA: %d bytes (%.0f KB)\n", diff_bss_data, diff_bss_data / 1024.0);

    return 0;
}


