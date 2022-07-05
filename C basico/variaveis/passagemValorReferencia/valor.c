#include <stdio.h>

int calculaDobro(int x){
        x = x*2;
        return x;
}

int main(){
    int y;
    y = 10;
    printf("%d\n", calculaDobro(y));
    printf("%d\n", y);    
}

// nesse caso o resultado dá 20
// mas quando printamos y denovo temos 10

// justamente porque utilizamos a passagem por valor, que 
// nao muda a variavel em si, mas cria uma copia.