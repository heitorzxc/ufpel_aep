/*
Escreva uma função recursiva para imprimir um vetor de inteiros ao contrário.
1. A função recursiva deve receber como parâmetro: o vetor e o tamanho.
2. Não deve usar para, enquanto, faça enquanto.
*/

#include <stdio.h>
int imprime(int *vetor, int tamanho)
{
    if (tamanho > 0)
    {
        printf("[%d]", vetor[tamanho - 1]);
        imprime(vetor, tamanho - 1);
    }
    return (0);
}
int main(void)
{
    int i = 0, tamanho = 0, vetor[128];
    printf("Informe a quantidade de elementos do vetor: ");
    scanf("%d", &tamanho);
    printf("Obtendo os valores do vetor: \n");
    for (i = 0; i < tamanho; i++)
    {
        printf("Posição %d: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Printando o vetor ao contrário: ");
    imprime(vetor, tamanho);
    return (0);
}
