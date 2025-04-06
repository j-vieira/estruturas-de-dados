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
	printf("%d ", no->valor);
	return percorrerLista(no);
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
	if (no->proximo == NULL) {
		return;
	}
	return lerLista(no->proximo);
}

int main() {
	int capacidade = 10;

	No *inicio = malloc(capacidade * sizeof(No));
	inicio->valor = 10;
	inicio->proximo = NULL;

	No *novoNo = adicionar(inicio, 5);
	adicionar(novoNo, 15);

	lerLista(inicio);
}
