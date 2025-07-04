#include <stdio.h>
#include <stdlib.h>

struct lista{
    int info;
    struct lista* prox;
};

typedef struct lista Lista;

Lista* lst_cria();
Lista* lst_insere(Lista* l, int v);
Lista* lst_insere_ordenado(Lista* l, int v);
Lista* lst_retira(Lista* l, int v);
void lst_imprime(Lista* l);
int lst_vazia(Lista* l);
void lst_libera(Lista* l);
Lista* lst_busca(Lista* l, int v);
Lista* lst_busca_ordenada(Lista* l, int v);
int lst_igual(Lista* l1, Lista* l2);
int lst_comprimento(Lista* l);
int lst_maiores(Lista* l, int n);
Lista* lst_ultimo(Lista* l);
Lista* lst_concatena(Lista* l1, Lista* l2);

int main(){
    
    Lista* minha_lista1 = lst_cria();
    Lista* minha_lista2 = lst_cria();

    for(int i = 0; i < 50000; i++){
        minha_lista1 = lst_insere_ordenado(minha_lista1, i+1);
        minha_lista2 = lst_insere_ordenado(minha_lista2, i+1);
    }
    
    printf("O comprimento da lista 1 é: %d\n", lst_comprimento(minha_lista1));
    printf("O comprimento da lista 2 é: %d\n", lst_comprimento(minha_lista2));

    // printf("Existem %d valores maiores que 1200 na lista 1.\n", lst_maiores(minha_lista1,1200));
    // printf("Existem %d valores maiores que 1200 na lista 2.\n", lst_maiores(minha_lista2,1200));
    // Lista* ultimo_elemento = lst_ultimo(minha_lista1);
    // printf("A última informação na lista 1 é  %d.\n", ultimo_elemento->info);
    // Lista* ultimo_elemento = lst_ultimo(minha_lista2);
    // printf("A última informação na lista 2 é  %d.\n", ultimo_elemento->info);

    minha_lista1 = lst_concatena(minha_lista1, minha_lista2);

    lst_imprime(minha_lista1);

    lst_libera(minha_lista1);
    // lst_libera(minha_lista2);

    return 0;
}


Lista* lst_ultimo(Lista* l){
    Lista* p = l;
    Lista* ant = NULL;
    
    while(p != NULL){
        ant = p;
        p = p->prox;
    }
    
    return ant;
}

Lista* lst_concatena(Lista* l1, Lista* l2){
    Lista* ultimo = lst_ultimo(l1);
    ultimo->prox = l2;

    return l1;
}

int lst_maiores(Lista* l, int n){
    int contador_maiores = 0;

    for(Lista* p = l; p != NULL; p = p->prox)
        if(p->info > n)
            contador_maiores++;
    
            return contador_maiores;
}

int lst_comprimento(Lista* l){
    Lista* p = l;
    int comprimento = 0;

    while (p != NULL)
    {
        comprimento++;
        p = p->prox;
    }
    
    return comprimento;
}

Lista* lst_cria(){
    return NULL;
}

Lista* lst_insere(Lista* l, int v){
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    
    if(!novo){
        printf("Não foi possível inserir novo elmento...");
        exit(1);
    }

    novo->info = v;
    novo->prox = l;

    return novo;
}

void lst_imprime(Lista* l){
    Lista* p;

    for(p = l; p != NULL; p = p->prox)
        printf("info: %d\n", p->info);
}

int lst_vazia(Lista* l){
    return l == NULL;
}

void lst_libera(Lista* l){
    Lista* p = l;

    while(p != NULL){
        Lista* t = p->prox;
        free(p);
        p = t;
    }
}


Lista* lst_busca(Lista* l, int v){

    for(Lista* p = l; p!= NULL; p = p->prox)
        if(p->info == v)
            return p;

    return NULL;
}

Lista* lst_busca_ordenada(Lista* l, int v){

    for(Lista* p = l; p!= NULL && p->info <= v; p = p->prox)
        if(p->info == v)
            return p;

    return NULL;
}

Lista* lst_retira(Lista* l, int v){
    Lista* ant = NULL;
    Lista* p = l;

    while(p != NULL && p->info != v){
        ant = p;
        p = p->prox;
    }

    if(p == NULL)
        return l;

    if(ant ==NULL)
        l = p->prox;
    else
        ant->prox = p->prox;
    
    free(p);

    return l;
}


Lista* lst_insere_ordenado(Lista* l, int v){
    Lista* novo;
    Lista* ant = NULL;
    Lista*  p = l;

    while(p != NULL && p->info < v){
        ant = p;
        p = p->prox;
    }

    novo = (Lista*)malloc(sizeof(Lista));
    novo->info = v;

    if(ant == NULL){
        novo->prox = l;
        l = novo;
    }
    else{
        novo->prox = p;
        ant->prox = novo;
    }

    return l;
}

int lst_igual(Lista* l1, Lista* l2){

    Lista* p1;
    Lista* p2;

    for(p1 = l1, p2 = l2; p1 != NULL && p2 != NULL;p1 = p1->prox, p2 = p2->prox)
        if(p1->info != p2->info)
            return 0;
    
    return p1 == p2;
}