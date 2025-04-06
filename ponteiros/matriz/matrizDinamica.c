// Matriz dinâmica (ponteiro para ponteiro)
// Crie uma matriz de inteiros NxM usando int ** com malloc, preencha com valores e libere a memória corretamente.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** criarMatriz(int linhas, int colunas) {

	int **matriz = malloc(linhas * sizeof(int *));

	for (int i=0; i<linhas; i++) {
		*(matriz + i) = malloc(colunas * sizeof(int));
	}

	for (int i=0; i<linhas; i++) {
		int *linha = *(matriz+i);
		for (int j=0; j<colunas; j++) {
			int *elemento = linha+j;
			*elemento = rand() % 10;
		}
	}

	return matriz;
}

void printarMatriz(int linhas, int colunas, int **matriz) {
	for (int i=0; i<linhas; i++) {
		int *linha = *(matriz + i);
		for (int j=0; j<colunas; j++) {
			int elemento = *(linha + j);
			printf("%d ", elemento);
		}
		printf("\n");
	}
}

void limparMatriz(int linhas, int **matriz) {
	for (int i=0; i<linhas; i++) {
		int *linha = *(matriz + i);
		free(linha);
	}
	free(matriz);
}



int main() {
	srand(time(NULL));
  	const int n = 2; const int m = 4;

	int **matriz = criarMatriz(n, m);
	printarMatriz(n, m, matriz);

	limparMatriz(n, matriz);
}
