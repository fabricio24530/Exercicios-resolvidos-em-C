Escreva um programa que recebe quatro números inteiros, calcula e apresenta a média aritmética  entre eles. 
Observação: não esqueça de formatar o valor da média no momento de apresentá-lo, utilize duas casas decimais.

#include <stdio.h>
int main()
{

    float media, n1, n2, n3, n4;


    printf("Informe o primeiro valor: ");
    scanf("%f", &n1);
    printf("Informe o segundo valor: ");
    scanf("%f", &n2);
    printf("Informe o terceiro valor: ");
    scanf("%f", &n3);
    printf("Informe o quarto valor: ");
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf("A media foi de: %.2f", media);
    return(0);

}
