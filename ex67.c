/*Utilizando funçoes faca um programa que peça dois numeros e mostre a soma entre ele e o dobro de cada um*/
#include <stdio.h>
#include <string.h>

int soma(int num, int num2)
{

    return num + num2;
}

int dobro(int num)
{

    return num*2;
}

int main(void)
{
    int num, num2;
    printf("Informe o primeiro numero:\n");
    scanf("%d", &num);
    printf("Informe o segundo numero:\n");
    scanf("%d", &num2);
    printf("A soma entre %d e %d e %d\n", num, num2, soma(num, num2));
    printf("O dobro de %d é %d\n", num, dobro(num));
    printf("O dobro de %d é %d\n", num2, dobro(num2));
}
