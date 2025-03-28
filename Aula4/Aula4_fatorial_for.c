#include <stdio.h>

int main(){
    int num=0, n=0, fat=1;

    printf("Digite um número: ");
    scanf("%d", &num);

    for(n=num; 1 < n; n--)
        fat*=n;

    printf("Fatorial de %d é %d.\n", num, fat);
    
    return 0;
}