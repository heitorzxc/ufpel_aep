// Defina o valor 10 no vetor de 10 elementos B se o índice do elemento for ímpar e 20 se for par.

#include <stdio.h>

int main (void) { 
	int vetor[9], a = 0, b = 0;
	for (a = 0; a < 10; a++) {
		if (a % 2 == 0) {
			vetor[a]=20;
		}
		else {
			vetor[a]=10;
		}
	}
	printf("Vetor: ");
	for (a = 0; a < 10; a++) {
		printf("%d ", vetor[a]);
	}
}
