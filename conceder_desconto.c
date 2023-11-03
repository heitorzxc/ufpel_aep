/*
Escreva um algoritmo que:</br>
- Leia 50 valores representando preços de produtos
- Escreva o valor do produto mais caro
- Dê um desconto de 12% para o produto mais barato
*/

#include <stdio.h>

int main(void)
{

    int i;
    float valores[49];
    float teste, maior, menor;
    printf("Digite o valor do produto 1: R$");
    scanf("%f", &valores[0]);
    maior = valores[0];
    menor = maior;
    for (i = 1; i < 50; i++)
    {
        printf("Digite o valor do produto %d: R$", i + 1);
        scanf("%f", &valores[i]);
        teste = valores[i];
        if (teste > maior)
        {
            maior = valores[i];
        }
        if (teste < menor)
        {
            menor = teste;
        }
    }
    printf("O produto mais caro custa: R$%f \n", maior);
    printf("\nO produto mais barato custa R$%f \n", menor);
    printf("Desconto de: R$%f \n", menor * 0.12);
    printf("Valor final do mais barato: R$%f \n", menor * 0.88);
}
