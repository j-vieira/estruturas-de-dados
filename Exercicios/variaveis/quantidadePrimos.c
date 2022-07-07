#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quantidadePrimos(int n){
    int quantidadePrimos = 0;
    for(int i=1; i<=n; i++){
        int divisorEncontrado = 0;
        for(int j=2; j<=sqrt(i); j++){
            printf("\ni:%d,  j:%d,  i mod j:%d\n",i,j, i%j);
            if(i%j==0){
                divisorEncontrado = 1;
            }
        }
        if(divisorEncontrado == 0){
            quantidadePrimos++;
        }
    }
    return quantidadePrimos; // pra pegar 1 e 2 que nao sao avaliados
}

int main(){
    int n = 10;
    printf("quantidade de primos de 1 a %d: %d\n",n,quantidadePrimos(n));
    return 0;
}