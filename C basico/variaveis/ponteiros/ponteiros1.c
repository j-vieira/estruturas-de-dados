#include <stdlib.h>
#include <stdio.h>

int main(){
    int *ponteiroA, *ponteiroB;
    
    ponteiroA = (int*) malloc(sizeof(int));
    ponteiroB = (int*) malloc(sizeof(int));

    *ponteiroA = 2;

    free(ponteiroA);
    free(ponteiroB);
}