/*Escreva um programa que receba a idade e altura de várias pessoas, calcule e apresente a média de altura e idade das
pessoas. A entrada de dados é encerrada quando for digitado o valor 0 para a idade.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, cont, soma_idade;
    float altura, media_idade, media_altura, soma_altura;

    soma_altura = soma_idade = cont = 0;
    do
    {
        printf("Informe a idade: \n");
        scanf("%i", &idade);
        system("clear");
        if (idade == 0)
        {
            break;
        }
        soma_idade = soma_idade + idade;

        printf("Informe a altura: \n");
        scanf("%f", &altura);
        soma_altura = soma_altura + altura;
        system("clear");
        cont++;
    }
    while(idade != 0);
    if (cont != 0)
    {
    media_altura = (float) soma_altura / cont;
    media_idade = (float) soma_idade / cont;
    }

    printf("Media das idade: %.2f anos.\n", media_idade);
    printf("Media das alturas: %.2fm.", media_altura);


    return 0;
}
