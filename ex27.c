Construa um programa que leia o número de termos da série e imprima o valor de S.
s = 1 + 1/2 + 1/3 + 1/4 + 1/5 + ... 1 /n

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int n_termos, i;
   double elemento, soma;


   printf("Quantidade de termos: \n");
   scanf("%i", &n_termos);
   soma = 1;
   printf("1");
   for ( i = 2; i <= n_termos; i++)
   {
        elemento = (double)1 / i;
        printf(" - %f", elemento);
        soma = soma + elemento;
   }

   printf("\nA soma dos elementos vale: %f", soma);

    return 0;
}
