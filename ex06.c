Escreva um programa que receba dois números, calcule e apresente um elevado ao outro.

#include <stdio.h>
int main()
{

    int n1, n2, cal_1, cal_2;
    printf("Informe um numero: \n");
    scanf("%i", &n1);
    printf("Informe um segundo numero: \n");
    scanf("%i", &n2);
    cal_1 = pow(n1, n2);
    cal_2 = pow(n2, n1);
    printf("O valor de %i elevado a %i é de: %i\n", n1, n2, cal_1);
    printf("O valor de %i elevado a %i é de: %i\n", n2, n1, cal_2);
    return(0);

}
