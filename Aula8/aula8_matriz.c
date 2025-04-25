#include <stdio.h>
#include <stdlib.h>

#define N_LINHAS 4
#define N_COLUNAS 4

float** cria_matriz(int n_linhas, int n_colunas);
void libera_matriz(float** matriz, int n_linhas);
void imprime_matriz(float** matriz, int n_linhas, int n_colunas);
float** transpor_matriz(float** matriz, int n_linhas, int n_colunas);

// Tarefa de casa...
float** soma_matriz(float** matriz_a, int linhas_a, int colunas_a, float** matriz_b, int linhas_b, int colunas_b);
float** sub_matriz(float** matriz_a, int linhas_a, int colunas_a, float** matriz_b, int linhas_b, int colunas_b);
float** mult_matriz(float** matriz_a, int linhas_a, int colunas_a, float** matriz_b, int linhas_b, int colunas_b);

int main(){

    float** matriz_a = cria_matriz(N_LINHAS,N_COLUNAS);

    printf("Imprimindo matriz...\n");

    imprime_matriz(matriz_a, N_LINHAS, N_COLUNAS);

    printf("Transpondo e criando uma nova matriz...\n");

    float** mat_t = transpor_matriz(matriz_a, N_LINHAS, N_COLUNAS);

    imprime_matriz(mat_t, N_COLUNAS, N_LINHAS);

    printf("Liberando as matrizes...\n");

    libera_matriz(matriz_a, N_LINHAS);
    libera_matriz(mat_t, N_COLUNAS);
    
    return 0;
}

float** cria_matriz(int n_linhas, int n_colunas){

    // Aloca o vetor que guarda as linhas da matriz.
    float** matriz = (float**)malloc(n_linhas * sizeof(float*));

    if(!matriz){
        printf("Falha ao alocar linhas da matriz...\n");
        exit(1);
    }

    // Aloca o vetor que guarda as colunas da matriz.
    for(int i =0 ; i < n_linhas; i++){
        matriz[i] = (float*)malloc(n_colunas * sizeof(float));
        
        if(!matriz[i]){
            printf("Falha ao alocar colnas da matriz...\n");
            exit(1);
        }
    }

    // Inicializa matriz
    for(int i =0 ;i < n_linhas; i++)
        for(int j =0; j< n_colunas; j++)
            matriz[i][j] = i*N_COLUNAS + j + 1;

    return matriz;
}

void libera_matriz(float** matriz, int n_linhas){

    for(int i =0; i< n_linhas; i++)
        free(matriz[i]);
    
    free(matriz);
}

void imprime_matriz(float** matriz, int n_linhas, int n_colunas){
    for(int i =0 ;i < n_linhas; i++){
        for(int j =0; j< n_colunas; j++)
            printf("%10.2f", matriz[i][j]);
        printf("\n");
    }
}

float** transpor_matriz(float** matriz, int n_linhas, int n_colunas){

    float** matriz_t = cria_matriz(n_colunas, n_linhas);

    for(int i = 0; i< n_linhas; i++)
        for(int j = 0; j< n_colunas; j++)
            matriz_t[j][i] = matriz[i][j];

    return matriz_t;
}

float** soma_matriz(float** matriz_a, int linhas_a, int colunas_a, float** matriz_b, int linhas_b, int colunas_b);
float** sub_matriz(float** matriz_a, int linhas_a, int colunas_a, float** matriz_b, int linhas_b, int colunas_b);
float** mult_matriz(float** matriz_a, int linhas_a, int colunas_a, float** matriz_b, int linhas_b, int colunas_b);
