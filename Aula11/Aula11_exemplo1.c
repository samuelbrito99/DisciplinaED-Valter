#include <stdio.h>

int compara(char* s1, char* s2);

int main(){

    char* string1 = "Aracatis";
    char* string2 = "Aracati";

    printf("Na escala alfabética, ");

    switch(compara(string1, string2)){
        case -1:
            printf("\"%s\" vem antes que \"%s\"", string1, string2);
        break;
        case 0:
            printf("\"%s\" eh igual a \"%s\"", string1, string2);
        break;
        case 1:
            printf("\"%s\" vem antes que \"%s\"", string2, string1);
        break;
    }

    return 0;
}

int compara(char* s1, char* s2){

    int i=0;

    // Enquanto não chegarmos ao fim de alguma das strings,
    // verifica-se...
    for(i=0; s1[i] != '\0' && s2[i] != '\0'; i++)
        // Se o caracter correspondente da string S1 é maior que o da string S2:
        // Isso indicaria que S2 vem antes que S1 na escala alfabética: -1.
        if(s1[i] > s2[i])
            return 1;
        // Se o caracter correspondente da string S2 é maior que o da string S1:
        // Isso indicaria que S1 vem antes que S2 na escala alfabética; +1.
        else if(s1[i] < s2[i])
            return -1;

    // Caso as duas srtings pararam com '\0' elas são idênticas: 0.
    if(s1[i] == s2[i])
        return 0;

    // Caso a string S1 parou antes, ela vem antes na escala alfabética: -1.
    if(s1[i] == '\0')
        return -1;

    // Caso a string S2 parou antes, ela vem antes na escala alfabética: +1.
    if(s2[i] == '\0')
        return 1;
}