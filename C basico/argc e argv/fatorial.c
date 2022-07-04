// compile com gcc fatorial.c -o fatorial
// execute com ./fatorial "n"


#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*fatorial(n-1);
    }
}

int main(int argc, char* argv[]){
    int n;
    if (argc==1){
        printf("Erro!\nColoque algum numero para ser calculado.");
    }else if (argc==2){
        n = atoi(argv[1]);
    }else{
        printf("Erro!\nVoce colocou %d valores mas a funcao so aceita 1.", argc);
    }

    int resultado = fatorial(n);
    printf("o fatorial de %d é igual a %d\n", n, resultado);
}