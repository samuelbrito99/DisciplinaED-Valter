#include <stdio.h>

int main(int qtd_parametros, char *parametros[]){

    printf("\n%d\n", qtd_parametros);

    for(int i= 0; i < qtd_parametros; i++)
        printf("%s\n\n", parametros[i]);

    return 0;
}