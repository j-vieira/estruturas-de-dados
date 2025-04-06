#include <stdio.h>
#include <stdlib.h>

int somarElementosVetor(int *v, int tamanho) {
    int soma = 0;
    //int tamanho = sizeof(v)/sizeof(int); n funciona, 8bytes/4 | linguagem inconsistente

    for (int i=0; i<tamanho; i++) {
        printf("%p\n", v+i);
        soma = soma + *(v + i);
    }
    return soma;
}

void printarVetor(int *v, int tamanho) {
    for (int i=0; i<tamanho; i++) {
        printf("%d ", *(v + i));
    }
    printf("\n");
}

void remover(int *v, int indice) {
    *(v+indice) = 0;
}

int obter(int *v, int indice) {
    printf("obtido no indice %d: %d\n", indice, *(v+indice));
    return *(v+indice);
}

int trocar(int *v, int indice, int novoValor) {
    *(v+indice) = novoValor;
}


int main() {

    int tamanho = 4;
    int *v = malloc(tamanho * sizeof(int));
    printf("%p\n", v);

    v[0] = 5; v[1] = 10; v[2] = 5; v[3] = 10;

    printarVetor(v, tamanho);
    printf("%d\n", somarElementosVetor(v, tamanho));

    obter(v, 3);

    free(v);
    printarVetor(v, tamanho);

}