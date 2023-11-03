/*
Leia uma matriz 5x5 M, calcule e escreva as seguintes somas:
1. Da linha 3 de M
2. Da coluna 2 de M
3. Da diagonal principal
4. Da diagonal secundária
5. De todos os elementos da matriz
*/

#include <stdio.h>

int main (void) { 
	// Criando a matriz 5x5 e variáveis auxiliares
	int matriz[5][5], a = 0, b = 0, soma = 0;

	// Estrutura de repetição para leitura de dados
	for (b = 0; b < 5; b++){
		for (a = 0; a < 5; a++) {
			printf("Linha %d, ", b+1);
			printf("coluna %d: ", a+1);
			scanf("%d",&matriz[b][a]);	
		}
		printf("\n");
	}
	printf("\n");
	
	/* Saída de dados, apenas para treinar
	printf("Imprimindo a matriz: \n \n");
	for (b = 0; b < 5; b++){
		for (a = 0; a < 5; a++) {
			printf("%d ",matriz[b][a]);	
		}
		printf("\n"); 
	}
	printf("\n"); */

	printf("Somando os elementos da linha 3: \n");
	for (a = 0; a < 5; a++) {
		soma = soma + matriz[3][a];
	}
	printf("Soma dos elementos: %d \n", soma);
	soma = 0;

	printf("Somando os elementos da coluna 2: \n");
	for (a = 0; a < 5; a++) {
		soma = soma + matriz[a][2];
	}
	printf("Soma dos elementos: %d \n", soma);
	soma = 0;	

	printf("Somando os elementos da diagonal principal: \n");
	for (a = 0; a < 5; a++) {
		soma = soma + matriz[a][a];
	}
	printf("Soma dos elementos: %d \n", soma);
	soma = 0;

	printf("Somando os elementos da diagonal secundária: \n");
	for (a = 0; a < 5; a++) {
		soma = soma + matriz[a][4-a];		
	}
	printf("Soma dos elementos: %d \n", soma);
	soma = 0;	

	printf("Soma de todos os elementos da matriz: \n");
	for (b = 0; b < 5; b++){
		for (a = 0; a < 5; a++) {
			soma = soma + matriz[b][a];	
		}
	}	
	printf("Soma dos elementos: %d \n", soma);
	soma = 0;
	
}
