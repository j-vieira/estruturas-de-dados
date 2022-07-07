#include <stdio.h>
#include <stdlib.h>

long long int CalculaSoma(int n, int m[], int k) {
	/* m = [a1, a2, ..., ak] */
	
	long long int s = 0;
	for (int i = 1; i <= n; i++) {
		int somar = 0;
		for (int j=0; j<k; j++) {
			if (i%m[j] == 0) {
				somar = 1; break;
			}
		}
		if (somar) {
			s += i;
		}
	}
	return s;
}

int main() {
	int n; int k; 
    int m[] = {3,5};
	printf("%lld\n", CalculaSoma(20, m, 2));
}