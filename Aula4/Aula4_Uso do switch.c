/* EXPLICAÇÃO do uso do SWITCH */
// Selecionando uma opção.

#include <stdio.h>

int main() {
    char turno;

    printf("Digite o turno (M = Matutino, V = Vespertino, N = Noturno): ");
    scanf(" %c%*c", &turno);

    switch (turno) {
        case 'M':
        case 'm':
            printf("Bom dia!\n");
            break;
        case 'V':
        case 'v':
            printf("Boa tarde!\n");
            break;
        case 'N':
        case 'n':
            printf("Boa noite!\n");
            break;
        default:
            printf("Turno inválido!\n");
    }

    return 0;
}

/*
EXERCÍCIO:
Implemente um programa em C que solicite repetidamente ao usuário
 que insira a opção 'S' (sim) ou 'N' (não). Caso o usuário digite
  'S' ou 's', o programa continuará em execução. Se a opção for 
  'N' ou 'n', a execução deve ser encerrada imediatamente. 
  Caso o usuário insira um valor inválido, exiba 
  a mensagem solicitando novamente uma opção.
*/