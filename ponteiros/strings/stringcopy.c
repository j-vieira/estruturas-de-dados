#include <stdlib.h>
#include <stdio.h>

char* strcopy(char *string) {
	int tamanhoString = sizeof(string);
	char *copia = malloc(tamanhoString);

	for(int i=0; i<tamanhoString; i = i+1) {
		*(copia + i) = *(string + i);
	}

	return copia;
}

void lerString(char *string) {
	int tamanhoString = sizeof(string);
	for (int i=0; i<tamanhoString; i++) {
		printf("%c", *(string + i));
	}
}

int main() {
	char *string = "banana";

	char *copia = strcopy(string);

	printf("%s\n", copia);
}