#include <stdlib.h>

float** cria_mat(int lin, int col);

int conta_num_em_mat(float** m, int lin, int col, float b);

int main(){

    float** matriz = cria_mat(4,5);

    printf("\nO numero 4 ocorre %d.", conta_num_em_mat(matriz, 4, 5, 4));

    return 0;
}

float** cria_mat(int lin, int col){

    float** m = (float**)malloc(lin * sizeof(float*));

    for(int i = 0; i < lin; i++)
        m[i] = (float*)malloc(col*sizeof(float));
       
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            m[i][j] = i + j+ 1; 
            printf("%5.1f", m[i][j]);
        }
        printf("\n");
    }

    return m;
}

int conta_num_em_mat(float** m, int lin, int col, float b){
    int qtd_ocorrencia_b = 0;

    for(int i = 0; i < lin; i++)
        for(int j = 0; j < col; j++)
            if(m[i][j] == b)
                qtd_ocorrencia_b++;
    
    return qtd_ocorrencia_b;
}