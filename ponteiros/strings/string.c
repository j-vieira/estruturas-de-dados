#include <stdio.h>
#include <stdlib.h>

// Escreva uma função que conte quantas vogais há em uma string usando ponteiros.

int contarVogais(char *str, int tamanhoString) {
    int quantidadeVogais = 0;
    printf("%d\n", tamanhoString);

    for (int i=0; i<tamanhoString; i++) {
        char caracterAtual = *(str + i);
        printf("%d %c", i, caracterAtual);
        int ehVogal = (caracterAtual == 'a' || caracterAtual == 'e' || caracterAtual == 'i' ||
                       caracterAtual == 'o' || caracterAtual == 'u');
        if(ehVogal) {
            quantidadeVogais++;
        }
    }

    return quantidadeVogais;
}

int main() {
    char *str; int tamanhoString;

    scanf("%d", &tamanhoString);
    getchar();

    str = malloc(tamanhoString * sizeof(char));

    // scanf("%s", str); nao funciona com espacos
    fgets(str, tamanhoString, stdin);

    printf("\n%d", contarVogais(str, tamanhoString));

    free(str);
}