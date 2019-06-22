Se o número for par devemos apresentar sua raiz quadrada e se for ímpar devemos apresentar o número elevado ao quadrado.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, pot;
    float raiz;
    printf("Digite um numero inteiro: ");
    scanf("%i", &num);
    if (num%2 == 0)
    {
        raiz = sqrt(num);
        printf("A raiz de %i é: %.2f", num, raiz);
    }
    else
    {
        pot = pow(num, 2);
        printf("O quadro de %i é: %i", num, pot);
    }
    return 0;
}
