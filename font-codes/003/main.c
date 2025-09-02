#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "fracao.h"

int main(){

    Fracao f1 = criarFracao(12, 24);
    Fracao f2 = criarFracao(4, 6);

    Fracao soma = somarFracao(f1, f2);
    Fracao subtracao = subFracao(f1, f2);
    Fracao mult = multFracao(f1, f2);
    Fracao div = divFracao(f1, f2);
    Fracao simplificada = simpFracao(f1);


    printf("Fracao 1: %d / %d\n", f1.num, f1.den);
    printf("Fracao 2: %d / %d\n", f2.num, f2.den);
    printf("Soma das fracoes: %d / %d\n", soma.num, soma.den);
    printf("Subtracao das fracoes: %d / %d\n", subtracao.num, subtracao.den);
    printf("Produto das fracoes: %d / %d\n", mult.num, mult.den);
    printf("Quociente das fracoes: %d / %d\n", div.num, div.den);
    printf("Fracao simplificada: %d / %d\n", simplificada.num, simplificada.den);

    return 0;

}

