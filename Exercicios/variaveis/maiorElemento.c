// Escreva uma função que recebe um vetor A de inteiros, um inteiro n≥1, 
// e retorne o maior elemento entre os n primeiros.
#include <stdio.h>

int maior(int A[], int n){
    int maior = 0;
    
    for(int i=0; i<n; i++){
        if(maior < A[i]){
            maior = A[i];
        }
    }
    return maior;
}

int main(){
    int A[] = {1,4,3,74,22,1,9,3,1,10,123,11,0,45};
    size_t n = sizeof(A)/sizeof(A[0]);
    printf("maior:%d\n", maior(A, n));
}