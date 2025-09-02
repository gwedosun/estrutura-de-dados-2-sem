#ifndef EQUIPE_H
#define EQUIPE_H

typedef struct {
    int Pos; 
    char Estado[20];
    char Equipe[50];
    int Pts;
    int J;
    int V;
    int E;
    int D;
    int GP;
    int GC;
    int SG; // saldo de gols
    float Aproveitamento;

} Time;

Time * LerDados(char * Arquivo);
int getPontos(Time * T, int Posicao);
float getAproveitamento(Time *T, char *Nome);

#endif