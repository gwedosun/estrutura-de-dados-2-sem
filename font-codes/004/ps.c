#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

int PesquisaSequencial(int * V, int N, int Chave);

int main(){
    int Numeros[] = {
        14, 29, 37, 11, 43, 25, 19, 32, 16, 22,
        40, 13, 28, 35, 10, 45, 20, 38, 17, 24,
        30, 41, 15, 27, 33, 18, 26, 39, 12, 21
    };

    int Tamanho = sizeof(Numeros)/sizeof(int);
    int Elemento = 82;
    int Posicao = PesquisaSequencial(Numeros, Tamanho, Elemento);

    printf("%d\n", Posicao);

    return 0;
}

int PesquisaSequencial(int * V, int N, int Chave){

    int i;
    for(i = 0; i < N; i++){
        if (V[i] == Chave){
            return i;
        }
    }
    return ERRO;
}

char * PesquisaSequencial(int * V, int N, int Chave){
    int i;
    char resposta[100];
    for(i = 0; i < N; i++){
        if(V[i] == Chave){
            sprintf(resposta, "O elemento %d esta na posicao %d\n", Chave, i);
            return i;
        }
    }
    strcpy(resposta, "ERRO: o elemento nao esta no vetor\n");
    return resposta;
}