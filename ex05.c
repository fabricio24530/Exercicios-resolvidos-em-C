Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e apresente o valor do rendimento e 
o valor total (valor do depósito + valor do rendimento).

#include <stdio.h>
int main()
{

    float dep, tx, red, tot;
    printf("Informe o valor a ser depositado R$: \n");
    scanf("%f", &dep);
    printf("Informe a taxa de juros em %%: \n");
    scanf("%f", &tx);
    red = dep * (tx/100);
    tot = dep + red;
    printf("O valor dos rendimentos sera de: %.2f\n", red);
    printf("O valor total a ser recuperado é de: %.2f", tot);
    return(0);
}
