#include <stdio.h>
#include <string.h>

char* duplica(char* string_original);

int main(){

    char* string1 = "comer";
    char* string2 = duplica(string1);

    string2[2]='z';

    printf("A stirng1 eh \"%s\" e a string2 ficou \"%s\".", string1, string2);

    return 0;
}

char* duplica(char* string_original){

    // Aloco a quantidade de memória necessária para guardar minha string_original.
    char* string_duplicada = (char*)malloc((strlen(string_original)+1)*sizeof(char));
    
    // Realizo a cópia caracter a caracter para string_duplicada.
    strcpy(string_duplicada, string_original);

    return string_duplicada;
}