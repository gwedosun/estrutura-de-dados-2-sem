#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct{
    int num;
    int den;
}fracao;

int calcularMDC(int a, int b);
fracao simplificarFracao(fracao f);
fracao somarFracoes(fracao f, fracao g);
fracao subFracoes(fracao f, fracao g);
fracao criarFracao(int N, int D);
void exibirFracao(fracao f);

int calcularMDC(int a, int b){
    if(a < 0) a = -a;
    if(b < 0) b = -b;
    while(a % b != 0){
        int temp = a;
        a = b;
        b = temp % b;
    }
    return(b);
}
fracao simplificarFracao(fracao f){
    int mdc = calcularMDC(f.num, f.den);
    f.num = f.num / mdc;
    f.den = f.den / mdc;
    return f;
}
fracao somarFracoes(fracao f, fracao g){
    fracao res;
    res.den = f.den * g.den;
    res.num = f.num * g.den + g.num * f.den;
    res = simplificarFracao(res);
    return res;
}
fracao subFracoes(fracao f, fracao g){
    fracao res;
    res.den = f.den * g.den;
    res.num = f.num * g.den - g.num * f.den;
    res = simplificarFracao(res);
    return res;
}
fracao criarFracao(int N, int D){
    fracao f;
    f.num = N;
    f.den = D;
    return f;
}
void exibirFracao(fracao f){
    printf("%d / %d\n", f.num, f.den);
}
int main(){
    fracao f0 = criarFracao(7, 2);
    printf("o valor da fracao f0 e %.1f\n", (float)f0.num/f0.den);
    fracao f1 = criarFracao(24, 30);
    f1 = simplificarFracao(f1);
    exibirFracao(f1); 
    fracao f2 = criarFracao(-30, 40);
    f2 = simplificarFracao(f2);
    exibirFracao(f2); 
    fracao f3 = criarFracao(37, 42);
    f3 = simplificarFracao(f3);
    exibirFracao(f3);
    fracao f4 = criarFracao(5, 6);
    fracao f5 = criarFracao(4, 9);
    fracao f6 = somarFracoes(f4, f5);
    exibirFracao(f6);
    fracao f7 = criarFracao(5, 6);
    fracao f8 = criarFracao(4, 9);
    fracao f9 = subFracoes(f7, f8);
    exibirFracao(f9);
    fracao f01 = criarFracao(3, 4);
    fracao f02 = criarFracao(7, 9);
    fracao f03 = criarFracao(5, 12);
    fracao f04 = subFracoes(f01, f02);
    fracao f05 = somarFracoes(f04, f03);
    exibirFracao(f05);
    // exibirFracao(f14);
    int t = sizeof(int);
    printf("tamanho %d", t);
    return 0;
}