#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int *dados;
    int tamanho;
    int capacidade;
}Vetor;

int trocar(Vetor vetor, int indice, int valor) {
    if(indice > vetor.capacidade) {
      return -1;
    }

    int *enderecoAlterado = vetor.dados+indice;
    *(enderecoAlterado) = valor;
    return *(enderecoAlterado);
}

int atribuir(Vetor *vetor, int valor) {
    if(vetor->tamanho > vetor->capacidade) {
        printf("\ncapacidade maxima atingida!\n");
    }
    int *enderecoNovoValor = vetor->dados+vetor->tamanho;

    *(enderecoNovoValor) = valor;
    vetor->tamanho = vetor->tamanho+1;
    return valor;
}

void ler(Vetor *vetor) {
    printf("\n%d\n", vetor->tamanho);
    for (int i=0; i<vetor->tamanho; i++) {
      printf("%d ", *(vetor->dados + i));
    }
    printf("\n");
}

void empilhar(Vetor *vetor, int valor) {
    atribuir(vetor, valor);
}

void desempilhar(Vetor *vetor) {
    vetor->tamanho--;
    int *enderecoTopo = vetor->dados + vetor->tamanho;
    *(enderecoTopo) = 0;
}

int somar(Vetor *vetor) {
    int soma = 0;
    for (int i=0; i<vetor->tamanho; i++) {
        soma = soma + *(vetor->dados + i);
    }
    return soma;
}

Vetor copiar(Vetor *vetor) {
    int *ptrNovoVetor = malloc(sizeof(vetor->dados));

    Vetor novoVetor = {ptrNovoVetor, vetor->tamanho, vetor->capacidade};

    for (int i=0; i<vetor->tamanho; i++) {
        *(novoVetor.dados + i) = *(vetor->dados + i);
    }

    return novoVetor;
}

void inverter(Vetor *vetor) {
    int *ponteiroInicio = vetor->dados;
    int *ponteiroFim = vetor->dados + vetor->tamanho-1;

    int i = 1;
    while (ponteiroInicio > ponteiroFim) {
        printf("%p %d | %p %d\n ", ponteiroInicio, *ponteiroInicio, ponteiroFim, *ponteiroFim);
        int swap = *ponteiroInicio;
        *ponteiroInicio = *ponteiroFim;
        *ponteiroFim = swap;

        ponteiroInicio++;
        ponteiroFim--;
        i++;
    }
}

int main() {
    int tamanho = 0; int capacidade = 10;
    int *ptr = malloc(capacidade * sizeof(int));

    srand(time(NULL));

    Vetor vetor = { ptr, tamanho, capacidade };

    for (int i=0; i<4; i++) {
        atribuir(&vetor, rand() % 10);
    }

    ler(&vetor);
    printf("\n%d\n", somar(&vetor));

    desempilhar(&vetor);
    desempilhar(&vetor);

    ler(&vetor);

    empilhar(&vetor, 2);
    empilhar(&vetor, 3);

    ler(&vetor);

    Vetor v2 = copiar(&vetor);
    ler(&v2);

    inverter(&v2);
    ler(&v2);

    free(vetor.dados);
}