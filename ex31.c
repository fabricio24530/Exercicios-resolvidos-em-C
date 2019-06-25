Elabore um programa que leia uma frase e o número de vezes que deseja imprimi-la.

#include <stdio.h>
#include <stdlib.h>


int main()
{
    char frase[40];
    int quantidade, i;

    printf("Escreva uma frase: \n");
    scanf("%s", &frase);
    printf("Quantidades de impressoes: \n");
    scanf("%i", &quantidade);
    i = 0;
    for (i = 0; i < quantidade; i++)
    {
        printf("%s\n", frase);
    }


  return 0;
}
