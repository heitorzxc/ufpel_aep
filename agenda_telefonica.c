/*
Considere o código fornecido em "code.c" e:
1. Crie uma função para preencher as 100 posições do vetor do cronograma.
2. Crie uma função para imprimir o nome e e-mail de todas as pessoas que nasceram na data informada no programa principal.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char nome[200];
	int diaNasc; //dia nascimento
	int mesNasc; //mês nascimento
	int anoNasc; //ano nascimento
	char email[100];
} Dados;

void preencher (Dados *agenda);
void listarPelaData (Dados *agenda, int dia, int mes, int ano);

int main(void) {
	Dados agenda[100];
	int dia, mes, ano;
	preencher(agenda);
	printf("Informe uma data.\nDigite o dia:");
	scanf("%d", &dia);
	printf("\nDigite o mes:");
	scanf("%d", &mes);
	printf("\nDigite o ano:");
	scanf("%d", &ano);
	listarPelaData(agenda, dia, mes, ano);
	return 0;
} 

void preencher (Dados *agenda) { 
	int i;
	for (i = 0; i < 100; i++) { 
		// Seta o buffer stdin (entrada) com NULL (nulo - vazio)
		setbuf(stdin,NULL);	
		printf("Digite o nome: ");
		fgets(agenda[i].nome, 200, stdin); 
		printf("Data de nascimento: \nDia: ");
		scanf("%d", &agenda[i].diaNasc); 
		printf("Mês: ");
		scanf("%d", &agenda[i].mesNasc); 
		printf("Ano: ");
		scanf("%d", &agenda[i].anoNasc); 
		// Seta o buffer stdin (entrada) com NULL (nulo - vazio)
		setbuf(stdin,NULL);
		printf("Digite o e-mail: ");
		fgets(agenda[i].email, 100, stdin); 							
	}
}

void listarPelaData (Dados *agenda, int dia, int mes, int ano) {
	int i;
	printf("Digite o dia: ");
	scanf("%d", &dia);
	printf("Digite o mês: ");
	scanf("%d", mes);
	printf("Digite o ano: ", ano); 
	scanf("%d", ano);
	for (i = 0; i < 200; i++) { 
		if (agenda[i].diaNasc == dia) { 
			if (agenda[i].mesNasc == mes) { 
				if (agenda[i].anoNasc == ano) { 
					printf("Nome: %s \n", agenda[i].nome);
					printf("E-mail: %s \n", agenda[i].email);
				}
			}
		}
	}
};
