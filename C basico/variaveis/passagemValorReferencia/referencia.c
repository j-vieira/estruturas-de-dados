#include <stdio.h>

int calculaDobro(int *x){
    *x = *x*2;
    return *x;
}

int main(){
    int y;
    y = 10;
    printf("y:%d\n", calculaDobro(&y));
    printf("y:%d\n", y);
}