#include <stdio.h>

char* uppercase_copy(char* string);

int main(){
    char* cidade = "Arac1ti$!\\";
    char* cidade_minuscula = uppercase_copy(cidade);
    
    printf("%s", cidade_minuscula);
    
    return 0;
}


char* uppercase_copy(char* string){
    
    int cont = 0;

    for(int i=0; string[i] != '\0'; i++, cont++);

    char* nova_string = (char*)malloc((cont+1) * sizeof(char));

    for(int i = 0; i < cont + 1; i++)
        nova_string[i] = string[i];
    
    for(int i =0; nova_string[i] != '\0'; i++)
        if('a' <= nova_string[i] && nova_string[i] <= 'z')
            nova_string[i] = nova_string[i] - 'a' + 'A';

    return nova_string;
}