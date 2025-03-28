#include <stdio.h>

int main(){
 char opcao = 'i';

    do{
        printf("Você gostaria de prosseguir com a execução? (S/N)");
        scanf("%c%*c", &opcao);
    }while(opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N');

    printf("O usuário deciciu ");

    // if(opcao == 's' || opcao == 'S')
    //     printf("prosseguir...\n");
    // else
    //     if(opcao == 'n' || opcao == 'N')
    //         printf("finalizar o programa...\n");
    //     else
    //         printf("Não entendi...\n");

    switch (opcao)
    {
    case 's':
    case 'S':
        printf("prosseguir...\n");
        break;
    case 'n':
    case 'N':
        printf("finalizar o programa...\n");
        break;
    default:
        printf("Não entendi...\n");
    }

    return 0;
}