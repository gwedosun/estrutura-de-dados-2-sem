#ifndef FRACAO_H
#define FRACAO_H

typedef struct {
    int num;
    int den;
} Fracao;

void exibirFracao(Fracao f);
Fracao criarFracao(int num, int den);
Fracao somarFracao(Fracao f, Fracao g);
Fracao subFracao(Fracao f, Fracao g);
Fracao multFracao(Fracao f, Fracao g);
Fracao divFracao(Fracao f, Fracao g);
Fracao simpFracao(Fracao f);
int calcularMDC(int a, int b);

#endif

