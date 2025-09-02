#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "fracao.h"

void exibirFracao(Fracao f) {
    printf("%d/%d", f.num, f.den);
};

Fracao criarFracao(int num, int den){
    Fracao f;
    f.num = num;
    f.den = den;

    return f;
};

Fracao somarFracao(Fracao f, Fracao g){
    Fracao resultado;
    resultado.num = (f.num * g.den) + (f.den * g.num);
    resultado.den = f.den * g.den;
    return resultado;
};

Fracao subFracao(Fracao f, Fracao g){
    Fracao resultado;
    resultado.num = (f.num * g.den) - (f.den * g.num);
    resultado.den = f.den * g.den;
    return resultado;
};

Fracao multFracao(Fracao f, Fracao g){
    Fracao resultado;
    resultado.num = f.num * g.num;
    resultado.den = f.den * g.den;
    return resultado;
};

Fracao divFracao(Fracao f, Fracao g){
    Fracao resultado;
    resultado.num = f.num * g.den;
    resultado.den = f.den * g.num;
    return resultado;
};

int calcularMDC(int a, int b){
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (a % b != 0){
        int temp = a;
        a = b;
        b = temp % b;
    };
    return b;
}

Fracao simpFracao(Fracao f) {
    int mdc = calcularMDC(f.num, f.den);
    f.num /= mdc;
    f.den /= mdc;
    return f;
}
