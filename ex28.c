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
    printf("Adição\t\tSubtração\t\tMultiplicação\t\tDivisão\n\n");

    for ( i = 1; i < 11; i++)
    {
        rsoma = num + i;
        rsubtracao = num - i;
        rmultiplicacao = num * i;
        rdivisao = (float)num / i;
        printf("%i + %i = %i\t%i - %i = %i\t\t%i x %i = %i\t\t%i / %i = %.2f\n", num, i, rsoma, num, i, rsubtracao, num, i, rmultiplicacao, num, i, rdivisao);
    }

    return 0;
}
