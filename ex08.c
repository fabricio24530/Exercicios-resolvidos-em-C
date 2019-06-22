Obter um número inteiro e se este for par imprimir sua raiz quadrada.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    float raiz;
    printf("Digite um numero inteiro: ");
    scanf("%i", &num);
    if (num%2 == 0)
    {
        raiz = sqrt(num);
        printf("%.2f", raiz);

    }
    else
    {
        printf("Seu numero não é par.");

    }
    return 0;
}
