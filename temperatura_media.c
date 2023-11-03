/*
Um pesquisador está investigando as mudanças climáticas e precisa calcular a temperatura média e a pressão atmosférica.
Escreva um programa que leia 30 valores representando dados diários medidos de temperatura e pressão atmosférica.
Escreva a temperatura média e a pressão atmosférica para este mês e a temperatura do dia mais quente.
*/

#include <stdio.h>

int main (void) {

	int dia = 1;
	float temp_dia = 0, pres_dia = 0, soma_temp = 0, soma_pres = 0, dia_quente = 0;

		for (dia = 1; dia < 31; dia++) {
		printf("Digite a temperatura (ºC): ");
		scanf("%f", &temp_dia);

		printf("Digite a pressão (hPa): ");
		scanf("%f", &pres_dia);

		if (temp_dia > dia_quente) {
			dia_quente = temp_dia;
		}

		soma_temp=soma_temp+temp_dia;
		soma_pres=soma_pres+pres_dia;
	}

	printf("Média de temperatura: %f ºC \n", soma_temp/30);
	printf("Média de pressão: %f hPa \n", soma_pres/30);	
	printf("Dia mais quente: %f ºC \n", dia_quente);

}
