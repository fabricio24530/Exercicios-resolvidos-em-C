 Elabore um programa que imprima a tabuada do 1 ao 10.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i, num, rsoma, rsubtracao, rmultiplicacao;
  float rdivisao;

  i = 1;
  printf("Informe um numero inteiro: \n");
  scanf("%i", &num);
  printf("Adição\n\n");
  for ( i = 1; i < 11; i++)
  {
    rsoma = num + i;
    printf("%i + %i = %i\n", num, i, rsoma);
  }
  printf("\nSubtração\n\n");
  for ( i = 1; i < 11; i++)
  {
    rsubtracao = num - i;
    printf("%i - %i = %i\n", num, i, rsubtracao);
  }
   printf("\nMultiplicacao\n\n");
  for ( i = 1; i < 11; i++)
  {
    rmultiplicacao = num * i;
    printf("%i x %i = %i\n", num, i, rmultiplicacao);
  }
  printf("\nDivisao\n\n");
  for ( i = 1; i < 11; i++)
  {
    rdivisao = (float)num / i;
    printf("%i / %i = %.2f\n", num, i, rdivisao);
  }
  
  return 0;
}
