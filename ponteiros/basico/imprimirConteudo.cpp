#include <stdio.h>

void imprimirConteudo(int *p) {
  printf("%d\n", *p);
}

int main() {
  int x = 10;
  imprimirConteudo(&x);

  int *a = &x;
  x = 20;
  imprimirConteudo(a);
}