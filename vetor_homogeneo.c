// Complete um vetor X de 10 elementos com o valor inteiro 30.

#include <stdio.h>

int main (void) { 
	int vetor[9], a = 0;
	for (a = 0; a < 10; a++) {
		vetor[a]=30;
	}
	printf("Vetor: ");
	for (a = 0; a < 10; a++) {
		printf("%d ", vetor[a]);
	}
}
