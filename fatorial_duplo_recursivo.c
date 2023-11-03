/*
Escreva uma função recursiva que recebe um inteiro positivo ímpar N e retorna o fatorial duplo desse número.
O fatorial duplo é definido como o produto de todos os números naturais ímpares de 1 a algum número natural ímpar N.
Por exemplo: o duplo fatorial de 5 é 5!! = 1 * 3 * 5 = 15
*/
int fatorialDuplo(int numRecebido){
    if(numRecebido == 1)
      return 1;
    else
      return numRecebido * fatorialDuplo(numRecebido-2);    
}