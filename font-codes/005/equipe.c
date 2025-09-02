#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipe.h"

Time * LerDados(char * Arquivo){

    Time * X = malloc(20 * sizeof(Time));
    if(X == NULL){
        printf("ERRO: memoria insuficiente!\n");
        exit(1);
    }

    FILE * fp = fopen(Arquivo, "r");
    if(fp == NULL){
        printf("ERRO: arquivo nao pode ser aberto!\n");
        exit(1);
    }
    
    int i = 0;

    char cabecalho[100];
    fgets(cabecalho, sizeof(cabecalho), fp);
    // printf("%s", cabecalho); // Remova ou comente se não quiser imprimir o cabeçalho

    while(i < 20 && fscanf(
        fp,
        "%d;%[^;];%[^;];%d;%d;%d;%d;%d;%d;%d;%d",
        &X[i].Pos, X[i].Estado, X[i].Equipe, &X[i].Pts, &X[i].J,
        &X[i].V, &X[i].E, &X[i].D, &X[i].GP, &X[i].GC, &X[i].SG
        ) == 11) {
        
        X[i].Aproveitamento = (float) 100 * X[i].Pts / (3 * X[i].J);
        i++;
    }

    fclose(fp);
    return X;
}

int getPontos(Time * T, int Posicao){
    for(int i = 0; i < 20; i++){
        if(T[i].Pos == Posicao)
            return T[i].Pts;
    }
    return -1;
}

float getAproveitamento(Time * T, char *Nome){
    for(int i = 0; i < 20; i++)
        if(strcmp(T[i].Equipe, Nome) == 0)
            return T[i].Aproveitamento;
    return 999;
}