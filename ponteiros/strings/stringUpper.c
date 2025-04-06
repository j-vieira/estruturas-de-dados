#include <stdlib.h>
#include <stdio.h>

void toUpper(char* string, int tamanhoString) {
	for (int i=0; i<tamanhoString; i++) {
		*(string + i) = *(string + i)-32;
	}
}

void lerString(char *string, int tamanhoString) {
	for (int i=0; i<tamanhoString; i++) {
		printf("%c", *(string+i));
	}
}

int main() {
	int tamanhoString; scanf("%d", &tamanhoString);
	getchar();

	char *str = malloc(tamanhoString * sizeof(char));
	fgets(str, tamanhoString, stdin);

	toUpper(str, tamanhoString);

	lerString(str, tamanhoString);
}