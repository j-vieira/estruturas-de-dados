#include <stdlib.h>
#include <stdio.h>

int main(){
    int *ponteiro, valor;

    valor = 2;

    ponteiro = &valor;

    *ponteiro = *ponteiro+3;

    printf("valor: %d\n", valor);
    
    printf("endereco de memoria: %p\n", ponteiro);
    
    printf("valor ponteiro: %d\n", *ponteiro);
}