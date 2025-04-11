#include <stdio.h>

void swap(int* num1, int* num2);
void sort(int* vetor, int n, char ordem);
void imprimir_vetor(int* vetor, int tamanho);

void main(){

    char opcao = 'x';
    int vetor[] = { 1, 9, 2, 8, 3, 7, 4, 6, 5, 0};
    
    printf("\n\tDigite a ordem que deseja ordenar...\n");
    printf("\tC - Crescente\n\tD - Decrescente\n ");
    
    // Só permite digitar opção válida.
    while(opcao != 'c' && opcao != 'C' && opcao != 'd' && opcao != 'D'){
        printf("\t>> ");
        scanf("%c%*c", &opcao);
    }

    sort(vetor, sizeof(vetor)/sizeof(int), opcao);

    imprimir_vetor(vetor, sizeof(vetor)/sizeof(int));
    
    return 0;
}

// Função para imprimir um vetor de inteiros.
void imprimir_vetor(int* vetor, int tamanho){

    printf("\nO números são: ");
    for(int i =0; i < tamanho; i++)
        printf("%d ", vetor[i]);

}

// Troca a posição entre duas variáveis inteiras.
void swap(int* num1, int* num2){

    int aux = *num1;

    *num1 = *num2;
    *num2 = aux;

}

// Ordena um vetor de inteiros.
void sort(int* vetor, int n, char ordem){

    switch(ordem){
        case 'c':
        case 'C':
        // Ordenação crescente
            for(int i = 0; i < n; i++)
                for(int j = i+1; j < n; j++)    
                    if(vetor[i] > vetor[j])
                        swap(&vetor[i], & vetor[j]);
        break;
        case 'd':
        case 'D':
        // Ordenação decrescente
            for(int i = 0; i < n; i++)
                for(int j = i+1; j < n; j++)    
                    if(vetor[i] < vetor[j])
                        swap(&vetor[i], & vetor[j]);
        break;
    }

}