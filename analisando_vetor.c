/*
Escreva um programa que crie e preencha um vetor com inteiros aleatórios (variando de 0 a 3000).
Ainda nesse programa, crie uma saída com as seguintes opções (utilize uma função para cada opção):
1. Imprima o maior número e sua posição no vetor.
2. Imprima todos os números pares no vetor.
3. Inverta os valores no próprio vetor (Não imprima o vetor!).
4. Imprima o vetor.
5. Sair.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define VET 3000

void maiorvalor(int *vetor);
void imprimepares(int *vetor);
void inverter(int *vetor);
void imprimir(int *vetor);

int main(void)
{
    srand(time(NULL));
    int i, sair, vetor[VET];
    sair = -1;
    for (i = 0; i < VET; i++)
    {
        vetor[i] = rand() % 3000;
    }
    printf("Vetor criado e preenchido.\n");
    while (sair < 0)
    {
        printf("Opção 1: Imprimir o maior número e a posição. \nOpção 2: Imprimir todos os pares do vetor. \nOpção 3: Inverter os valores do vetor. \nOpção 4: Imprimir o vetor. \nOpção 5: Sair. \nDigite a opção: ");
        scanf("%d", &sair);
        switch (sair)
        {
        case 1:
            maiorvalor(vetor);
            sair = -1;
            break;
        case 2:
            imprimepares(vetor);
            sair = -1;
            break;
        case 3:
            inverter(vetor);
            sair = -1;
            break;
        case 4:
            imprimir(vetor);
            sair = -1;
            break;
        case 5:
            printf("Saindo. \n");
            sair = 1;
            break;
        }
    }
    return (0);
}

void maiorvalor(int *vetor)
{
    int valor = 0, posicao = 0, lugar = 0;
    for (lugar = 0; lugar < VET; lugar++)
    {
        if (valor < vetor[lugar])
        {
            valor = vetor[lugar];
            posicao = lugar;
        }
    }
    printf("Maior valor: %d \n", valor);
    printf("Posição: %d \n", posicao);
}

void imprimepares(int *vetor)
{
    int qtd = 0, lugar = 0;
    for (lugar = 0; lugar < VET; lugar++)
    {
        if (vetor[lugar] % 2 == 0)
        {
            qtd++;
            printf("[%d]", vetor[lugar]);
        }
    }
    if (qtd == 0)
    {
        printf("Não foram encontrados números pares.");
    }
    printf("\n");
}

void inverter(int *vetor)
{
    int vetorContra[VET], i = 0, j = 0;
    for (j = VET - 1; j >= 0; j--)
    {
        vetorContra[i] = vetor[j];
        i++;
    }
    for (i = 0; i < VET; i++)
    {
        vetor[i] = vetorContra[i];
    }
    printf("O conteúdo do vetor foi invertido.\n");
}

void imprimir(int *vetor)
{
    int lugar;
    printf("Imprimindo o vetor... \n");
    for (lugar = 0; lugar < VET; lugar++)
    {
        printf("[%d]", vetor[lugar]);
    }
    printf("\n");
}
