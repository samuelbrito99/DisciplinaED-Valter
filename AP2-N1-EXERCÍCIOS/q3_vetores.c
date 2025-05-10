#include <stdio.h>

void inverte(int n, int* vet);

int main(){
    int vetor[]={1, 2, 3, 4, 5, 6};

    printf("Vetor inicial: ");
    for(int i = 0; i < sizeof(vetor)/sizeof(int); i++)
        printf("%d ", vetor[i]);

    inverte(sizeof(vetor)/sizeof(int), vetor);

    printf("\nVetor final: ");
    for(int i = 0; i < sizeof(vetor)/sizeof(int); i++)
        printf("%d ", vetor[i]);
    return 0;
}

void inverte(int n, int* vet){
    int aux;
    for(int i =0; i <= (int)(n/2); i++){
        aux = vet[i];
        vet[i] = vet[n-1-i];
        vet[n-1-i] = aux;
    }
}