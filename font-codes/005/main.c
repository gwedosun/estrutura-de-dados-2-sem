#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipe.h"

int main(){
    
    Time * Tabela = LerDados("tabela.csv");
    for(int i = 0; i < 20; i++){
        printf("%d\t%.2f\t%s\n", Tabela[i].Pos, Tabela[i].Aproveitamento, Tabela[i].Equipe);
    }

    printf("%.2f%%\n", getAproveitamento(Tabela, "Cuiaba"));

    return 0;
}