Faça um programa que apresenta a soma de todos os números inteiros ímpares entre 200 e 500.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i, soma;

  soma = 0;
  for (i = 200; i < 500; i++)
  {
    if (i %2!=0)
    {
        soma = soma + i;
    }
  }
  printf("A soma de todos os numeros impares entre 200 e 500 é: %i", soma);

  return 0;
}
