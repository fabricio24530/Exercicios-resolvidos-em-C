/*Escreva um programa que peça um numero real e retorne a parte inteira e a parte fracionaria.*/

#include <stdio.h>

int main(void)
{

    float num, p_fracionaria;
    int p_inteira;

    printf("Informe um numero qualquer:\n");
    scanf("%f", &num);

        p_inteira = (int)num;
        p_fracionaria = num - (p_inteira);

    printf("%d\n", p_inteira);
    printf("%.2f", p_fracionaria);

    return 0;
}
