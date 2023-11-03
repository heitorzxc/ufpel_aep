/*
Faça um algoritmo que leia um número inteiro.
Exiba uma mensagem indicando se esse número é par ou ímpar e se é positivo, negativo ou zero.
*/

#include <stdio.h>

int main (void) {
	int numero;
	printf("Digite um número: ");
	scanf("%d", &numero);
	if ( (numero % 2) == 0) {
        // Paridade: Se o módulo (resto) for IGUAL a zero.
	    printf("O número é par.\n");			
	}
	else { 
	    printf("O número é ímpar.\n");
	}
	if (numero == 0) { 
	    printf("O número é zero.\n");
	}
	else {
		if (numero>0){
		    printf("O número é positivo.\n");
		}
		else {
			printf("O número é negativo.\n");
		}
	}
	printf("\n");
}
