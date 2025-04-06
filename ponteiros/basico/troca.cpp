#include <stdio.h>

void swap(int *a, int *b);

void swap(int* a, int* b) {
    printf("%p\n", a);
    int c = *a; // C guarda conteudo de A
    printf("%d\n", c);

    *a = *b; // A vai pro endereço de b
    *b = c; // b recebe conteudo de c
}

/*void swap(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}*/

int main() {
    int x = 10;
    int y = 5;

    int *a = &x;
    int *b = &y;

    printf("a: %p, b:%p\n", a, b);
    printf("a: %d, b:%d\n", *a, *b);

    *b = *a;
    printf("a: %p, b:%p\n", a, b);
    printf("a: %d, b:%d\n", *a, *b);

    b = a;

    printf("a: %p, b:%p\n", a, b);
    printf("a: %d, b:%d\n", *a, *b);

    x = 20;
    y = 40;

    swap(&x,&y);

    printf("%d %d", x, y);
}
// int* ponteiro = &endereco;

