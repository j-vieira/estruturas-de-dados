#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//soma dos termos PA: ((a1+an)*n)/2
long long int calculaSoma(int n) {
	long long int s = (1+n);
	s = s*n/2;
	return s;
}

int main() {
    clock_t tempo;
    
    tempo = clock();
	
    int n=10000000;
    printf("%lld\n", calculaSoma(n));
    
    tempo = clock()-tempo; //final-inicial

    printf("Tempo de execucao: %lf\n", ((double)tempo)/((CLOCKS_PER_SEC/1000)));
}