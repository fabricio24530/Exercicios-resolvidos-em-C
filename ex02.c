/*Escreva um programa que lê um número positivo inteiro e apresente o quadrado
e a raiz quadrada deste número. */
#include <stdio.h>
int main()
{
    int num;
    printf("Informe um numero: \n");
    scanf("%i", &num);
    int quadrado = pow(num,2);
    double raiz = sqrt(num);
    printf("O quadrado do numero é: %i\n", quadrado);
    printf("A raiz quadrada do numero é: %.2f", raiz);

    return 0;
}
