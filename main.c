#include <stdio.h>
#include <stdlib.h>


//Declaração de tipos para a fila

typedef struct No{
    int valor;
    struct No *prox;
}No;

typedef struct Fila{
    No *inicio, *fim;
    int tamanho;
}Fila;


// Funções basicas para a manipulação de filas

void IniciaFila(Fila *f){
    f->inicio = NULL;
    f->fim = NULL;
    f->tamanho=0;
}  

int Vazia(Fila *f){
    return (f->inicio == NULL);
}  

void Enfileira(Fila *f, int x){
    No *aux;
    aux = (No *) malloc(sizeof(No));
    aux->valor=x;
    aux->prox=NULL;
    if (Vazia(f)){
        f->inicio=aux;
        f->fim=aux;
    }
    else {
        f->fim->prox = aux;
        f->fim = aux;
    }
    f->tamanho++;
}   

int primeiro(Fila *f){
    return f->inicio->valor;
}

int Desenfileira(Fila *f){
    No *q;
    int v;
    if (Vazia(f)){ 
        printf("Fila esta vazia\n");
        return 0;
    }
    q = f->inicio;
    v = f->inicio->valor;
    f->inicio = f->inicio->prox;
    free(q);
    f->tamanho--;
    return v;
}  

int Tamanho(Fila *f){
    return (f->tamanho);
} 


// Programa Principal

int main(){
    Fila F;
    int op,num, valor;
    IniciaFila(&F);

    scanf("%d",&op);
    do{
        switch(op){
            case 1:
				scanf("%d", &num);
                Enfileira(&F, num);
                printf("inserido\n");
                break;
            case 2:
                if (Vazia(&F)){
					printf("fila vazia!\n");
				}
				else {
					valor = Desenfileira(&F);
					printf("%d\n", valor) ; 
				}
				break;
            case 3:
                printf("%d\n",primeiro(&F));
                break;
            case 4:
                printf("%d\n",Tamanho(&F));
                break;
            case -1:
                break;
        }if(op!=-1){
            scanf("%d",&op);
        }
    }while(op!=-1);
return 0;
}
