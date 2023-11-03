/*
Leia 2 matrizes, A 4x6 e B 4x6 e crie:
1. Uma matriz S que é a soma de A e B.
2. Uma matriz D que é a diferença de A e B.</br>
Escreva as matrizes S e D após a conclusão de todos os cálculos.
*/

#include <stdio.h>

int main () { 
	int ma[4][6], mb[4][6], ms[4][6], md[4][6], a = 0, b = 0, c = 0;
    printf("Obtendo matriz A: \n");
	// Estrutura de repetição para leitura de dados
	for (b = 0; b < 4; b++) {
		for (a = 0; a < 6; a++) {
			printf("Linha %d, ", b+1);
			printf("coluna %d: ", a+1);
			scanf("%d", &ma[b][a]);	
		}
		printf("\n");
	}
	printf("\n");
    printf("Obtendo matriz B: \n");
	// Estrutura de repetição para leitura de dados
	for (b = 0; b < 4; b++) {
		for (a = 0; a < 6; a++) {
			printf("Linha %d, ", b+1);
			printf("coluna %d: ", a+1);
			scanf("%d",&mb[b][a]);	
		}
		printf("\n");
	}
	printf("\n");
    // Criando a matriz S com a soma de A e B
	for (b = 0; b < 4; b++){
		for (a = 0; a < 6; a++) { 
        	c = ma[b][a] + mb[b][a];	
            ms[b][a] = c;
            c = 0;
		}
	}
    // Criando a matriz D com a diferença de A e B
	for (b = 0; b < 4; b++){
		for (a = 0; a < 6; a++) {
        	c = ma[b][a] - mb[b][a];	
            md[b][a] = c;
            c = 0;
		}
	}
	printf("Imprimindo a matriz S (A + B): \n \n");
	for (b = 0; b < 4; b++){
		for (a = 0; a < 6; a++) {
			printf("%d ", ms[b][a]);	
		}
		printf("\n"); 
	}
	printf("\n");
	printf("Imprimindo a matriz D (A - B): \n \n");
	for (b = 0; b < 4; b++){
		for (a = 0; a < 6; a++) {
			printf("%d ", md[b][a]);	
		}
		printf("\n"); 
	}
	printf("\n");
}
