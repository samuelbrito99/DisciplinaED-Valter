#include <stdio.h>

int eh_digito(char caracter);
int eh_letra(char caracter);
char maiuscula(char caracter);

int main(){

    char c = 'a';

    printf("%c : %d\n", c, c);

    if(eh_digito(c))
        printf("%c eh um diigito...\n", c);
    else
        printf("%c não eh um diigito...\n", c);

    if(eh_letra(c))
        printf("%c eh um letra...\n", maiuscula(c));
    else
        printf("%c não eh uma letra..\n", c);

    return 0;
}

int eh_digito(char caracter){
    return ('0' <= caracter && caracter <= '9');
}

int eh_letra(char caracter){
    return ('A' <= caracter && caracter <= 'Z') || ( 'a' <= caracter && caracter <= 'z');
}

char maiuscula(char caracter){

    if('a'<= caracter && caracter <= 'z')
        return caracter - 'a' + 'A';
    
    return caracter;
}