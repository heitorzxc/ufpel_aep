/*
Escreva um algoritmo que leia uma quantidade indeterminada de idades das pessoas.
A condição de rescisão estará inserindo um valor negativo.
Conte e mostre quantas dessas pessoas ainda não podem votar (idade < 16 anos).
*/

#include <stdio.h>

int main (void) { 
	int idade = 0, cont = 0;
	while (idade >= 0) {
	printf("Digite a idade: ");
	scanf("%d", &idade);
		// Se a idade for menor que 16 anos.
		if (idade < 16) {
			// Incrementar contador.
			cont++;
		}
	}
	// Exibir número de pessoas que não podem votar.
	printf("Não podem votar: %d", cont-1);
	// Não existe idade negativa, por isso que a exibição está decrementada.
}
