/*Em uma avaliação de um produto o cliente responde sua opinião (1 – satisfatório; 2 – indiferente; 3 – insatisfatório). 
Faça um programa que leia a idade e opinião e apresente: o número de clientes que respondeu satisfatório, a média de idade 
dos clientes que opinaram como satisfatório e o número de quem respondeu insatisfatório. O programa se encerra quando for 
digitado o valor 0 para idade.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, opiniao, soma_idade, conts, conti;
    float media_satisfatorio;

    soma_idade =  media_satisfatorio = conts = conti =  0;
    do
    {
    printf("Idade: \n");
    scanf("%i", &idade);
    if (idade == 0)
    {
        break;
    }


    printf("Avalie o produto:\n[1] - Satisfatorio\n[2] - Indiferente\n[3] - Insatisfatorio\n");
    scanf("%i", &opiniao);
    switch (opiniao)
    {
        case (1):
        conts++;
        soma_idade = soma_idade + idade;
        break;
        case (2):
        break;
        case (3):
        conti++;
        break;
    }

    }
    while( idade != 0);

    if ( conts != 0)
    {
    media_satisfatorio = (float)soma_idade / conts;
    }

    printf("Quantidade de satisfatorios: %i.\n", conts);
    printf("Media de idade dos que responderam satisfatorio: %.2f\n", media_satisfatorio);
    printf("Quantidade de insatisfatorios: %i.", conti);



    return 0;
}
