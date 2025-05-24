#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto{
    float x;
    float y;
}Ponto;


void imprime_ponto(Ponto* p);
void ler_ponto(Ponto* p);
Ponto* criar_ponto();
float distancia(Ponto* p, Ponto* q);

int main(){
    Ponto* p1 = criar_ponto();
    Ponto* p2 = criar_ponto();

    ler_ponto(p1);
    imprime_ponto(p1);

    ler_ponto(p2);
    imprime_ponto(p2);

    printf("\nA distância entre p1 e p2 é: %.2f", distancia(p1,p2));

    free(p1);
    free(p2);


    return 0;
}

float distancia(Ponto* p, Ponto* q){
    return sqrt(pow(q->x - p->x, 2)+ pow(p->y - q->y, 2));
}

Ponto* criar_ponto(){
    Ponto* p = (Ponto*)malloc(sizeof(Ponto));
    
    if(!p){
        printf("Memória insuficiente...");
        exit(1);
    }

    return p;
}

void ler_ponto(Ponto* p){
    printf("Digite as coordenadas (x, y): ");
    scanf("%f %f%*c", &p->x, &p->y);
}

void imprime_ponto(Ponto* p){
        printf("O ponto fornecido foi: (%.2f, %.2f)\n", p->x, p->y);
}