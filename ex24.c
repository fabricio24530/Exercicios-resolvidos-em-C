O problema consiste em ler um conjunto de números inteiros e contar a quantidade de números pares e ímpares. A leitura dos números deve ser realizada até que seja lido o valor zero.

#include <stdio.h>

int main()
{
    int num;
    int contp, conti;

    contp = conti = 0;

    printf("Informe um numero: \n");
    scanf("%i", &num);


    while ( num != 0)
    {
        if ( num%2 == 0)
        {
            contp++;
        }
        else
        {
            conti++;
        }
        printf("Informe um numero: \n");
        scanf("%i", &num);

    }

    printf("A quantidade de pares digitados é: %i \n", contp);
    printf("A quantidade de impares digitados é: %i", conti);


    return 0;
}


