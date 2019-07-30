/*Criar um contador decremental sem usar operadores relacionais no laço*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned short int x = 10;

    while (x) // x igual a zero equivale a Falso, fazendo parar o laço.
    {
        printf("%hu\n", x);
        x--;
    }
}
