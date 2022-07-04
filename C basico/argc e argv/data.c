#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int mes;
    char* nomeMes[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho",
                        "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    if (argc==4){
        mes = atoi(argv[2]); 
        if(mes<1 || mes>12){
            printf("Erro!\nMes invalido!");
        }
        else{
            printf("\n%s de %s de 20%s\n", argv[1], nomeMes[mes-1], argv[3]);
        }
    }
    else{
        printf("Erro!\nUso: data dia mes ano, todos inteiros");
    }
}

