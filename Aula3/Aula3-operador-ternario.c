#include <stdio.h>
float maior(float a,float b){
    return a>b?a:b;
}

float menor(float a,float b){
    return a<b?a:b;
}

int main(){

    float a,b;
    float lim_inferior = 10;
    float lim_superior = 100;
    float valor;

    printf("Digite dois valores: ");
    scanf("%f %f", &a, &b);

    valor = maior(a,b);

    printf("O maior entre os dois números é: %.2f\n", a>b?a:b);

    printf("O maior valor, limitado pelo intervalo [%.2f,%.2f]: %.2f", lim_inferior, lim_superior, menor(maior(lim_inferior,valor),lim_superior));
    
    return 0;
}