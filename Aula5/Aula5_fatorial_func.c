#include <stdio.h>

// Protótipo da função
int fatorial(int n);

int main(int qtd_parametros, char *parametros[]){
    
    int num;
    
    switch(qtd_parametros){
        case 1:
            printf("\nDigite um número: ");
            scanf("%d%*c", &num);
        break;
        default:
        num = atoi(parametros[1]);
    }
    

    printf("\n%d! = %d\n", num, fatorial(num));
    
    return 0;
}

// Implementação das outras Funções
int fatorial(int n){

    int resultado = 1;
    for(int i = 2; i<= n; i++)
        resultado*=i;

    return resultado;
}