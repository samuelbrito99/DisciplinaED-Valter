#include <stdio.h>

void somaproduto(int a, int b, int* c, int* d);

int main(void){

    int s,p;

    somaproduto(4,3, &s, &p);

    printf("soma: %d produto: %d", s, p);

    return 0;
}

void somaproduto(int a, int b, int* c, int* d){
    *c = a+b;
    *d = a*b;   
}