/*Fatorial de um numero usando função recursiva e prototipagem:*/

#include <stdio.h>

int fat(int x);

int main(void)
{

    int numero, fatorial;


    printf("Informe um numero:\n");
    scanf("%i", &numero);

    fatorial = fat(numero);

    printf("O fatorial de %i e %i.", numero, fatorial);

    return 0;
}

int fat(int x)
{
    int resultado;
    if ( x == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = x*fat(x-1);
    }

    return resultado;

}
