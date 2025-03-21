#include <stdio.h>

double variavel1 = 65536;

void imprime(void);

int main(){


    printf("Bytes usados pela variavel1: %d\n", sizeof(variavel1));
    printf("Endereço: %p\n", &variavel1);
    printf("Valor: %f\n", variavel1);
    imprime();

    /* Inclui o getchar para o programa não terminar logo e 
    nos possibilitar ver a quantidade de memória virtula que o sistema usa para nosso programa.
    Vá em Gerenciamento de tarefas no Windows e encontre Aula2.exe e veja a quantidade de 
    memória que temos para executar nosso programa. */
    
    getchar();
    return 0;
}

void imprime(){
    int variavel2 = 1000;
    printf("Endereço: %p\n", &variavel2);
    printf("Valor variável2: %d\n", variavel2);
    
    // Experiência de distância entre regiões de memória:  
    printf("Distância entre var1 e var2: %d", (char*)&variavel1 - (char*)&variavel2);
    /* Essa distância virtual é a mesma para o mesmo programa, mas é
    diferente ao executar devido à paginação do sistema operacional.
    Por isso ela às vezes é negativa e, por vezes, positiva.*/
}