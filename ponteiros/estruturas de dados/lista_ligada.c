#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *proximo;
} No;

No *percorrerLista(No *no) {
    if (no->proximo == NULL) {
        return no; 
    }
    return percorrerLista(no->proximo);  
}

No *adicionar(No *no, int valor) {
    No *novoNo = malloc(sizeof(No));  
    novoNo->valor = valor;
    novoNo->proximo = NULL;

    No *ultimoNoAtual = percorrerLista(no);  
    ultimoNoAtual->proximo = novoNo;  
    return novoNo;  
}

void lerLista(No *no) {
    printf("%d ", no->valor);
    if (no->proximo != NULL) {
        lerLista(no->proximo);  
    }
}

int main() {
    int capacidade = 10;

    No *inicio = malloc(sizeof(No));  
    inicio->valor = 1;
    inicio->proximo = NULL;

    adicionar(inicio, 2);
    adicionar(inicio, 3);
    adicionar(inicio, 4);

    lerLista(inicio);
    return 0;
}
