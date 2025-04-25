#include <stdio.h>

int main(){

    //char cidade[]= {'A', 'r', 'a', 'c', 'a', 't', 'i', '\0'};
    char cidade[81] = "Aracati dos bons ventos...";
    char nome[51] = "";

    printf("Digite seu nome: ");
    scanf("%80[^\n]", nome);

    // Caso tenha digitado mais de 80 caracteres,
    // retira-se tudo até o '\n'.
    while (getchar() != '\n');

    printf("Digite sua cidade: ");
    scanf("%50[^\n]", cidade);

    // Caso tenha digitado mais de 80 caracteres,
    // retira-se tudo até o '\n'.
    while (getchar() != '\n');

    printf("\nSou %s e moro em %s\n", nome, cidade);

    return 0;
}
