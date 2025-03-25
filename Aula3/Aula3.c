#include <stdio.h>

int main(){

    int f = 0; // Guarda valores de altura em pés.
    float p = 0; // Guarde valores de altura em polegadas.
    float h = 0; // Guarda valores de altura em metros.

    printf("Digite altura em metros: ");
    scanf("%f", &h);

    h = 100*h;                // Converte a altura em centímetros.

    f = (int) (h/30.48);      // Calcula a alura em número de pés.
    p = (h - f*30.48) / 2.54; // Calcula o complemento da altura em polegadas. 
    
    /* Exibe a altura convertida */
    printf("Altura: %dft %.1fpol\n", f, p);

    return 0;
}