#include <stdio.h>

int somaPonteiros(int *a, int *b) {
    return *a + *b;
}

int main() {
    int x, y;
    int *a, *b;

    x = 10; y = 20;
    a = &x; b = &y;

    printf("%d\n", somaPonteiros(a, b));

}