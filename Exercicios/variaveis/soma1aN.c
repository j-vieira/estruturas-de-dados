#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long int calculaSoma(int n) {
	long long int soma = 0;
	
	for(int i=1; i<=n; i++){
		soma = soma+i;
	}
	
	return soma;
}

int main() {
	clock_t tempo;
    
    tempo = clock();

	int n = 10000000;
	printf("%lld\n", calculaSoma(n));

	tempo = clock()-tempo; //final-inicial

    printf("Tempo de execucao: %lf\n", ((double)tempo)/((CLOCKS_PER_SEC/1000)));
}