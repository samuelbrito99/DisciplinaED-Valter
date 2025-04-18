#include <stdio.h>
#include <stdlib.h>

float media(int n, float* v);
float variancia(int n, float* v);

int main(void){

    int n = 0;

    printf("Com quantos números vamos trabalhar?\n");
    scanf("%d%*c", &n);

    // Alocação dinâmica da quantidade de posições do tipo
    // float que precisaremos no programa.
    float* vetor = (float*)malloc(n*sizeof(float));

    if (vetor == NULL){
        printf("Não temos memória suficiente para trabalhar com %d floats...", n);
        exit(1);
    }

    for(int i = 0; i < n; i++){
        printf("Digite o número %d: ", i+1);
        scanf("%f%*c", &vetor[i]);
    }

    printf("\nImprimindo os números:\n");
    for(int i = 0; i < n; i++)
        printf("%.2f\n", vetor[i]);

    printf("A média deles é: %.2f\n", media(n, vetor));
    printf("A variância deles é: %.2f\n", variancia(n, vetor));
    
    return 0;
}

float media(int n, float* v){
    float media = 0.0;

    for(int i = 0; i < n; i++)
        media += v[i];

    return media/(float)n;
}

float variancia(int n, float* v){

    float med = media(n, v);
    float var = 0.0;

    for(int i = 0; i < n; i++)
        var += (v[i]-med)*(v[i]-med);

    return var/(float)n;
}