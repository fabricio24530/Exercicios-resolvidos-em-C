Construa um programa que receba a idade de uma pessoa e identifique sua classe eleitoral: não eleitor (menor que 16 anos de idade), eleitor obrigatório (entre 18 e 65 anos) e eleitor facultativo (entre 16 e 18 anos e maior que 65 anos).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;

    printf("Informe sua idade:");
    scanf("%i", &id);

    if ( id < 16)
    {
        printf("Idade: %i\nSituação: Nao eleitor.", id);
    }
    else
    {
        if ( (id >= 16 && id < 18) || (id > 65))
        {
            printf("Idade: %i\nSituação: Eleitor facultativo.", id);
        }
        else
        {
            if ( id >= 18 && id <= 65)
            {
                printf("Idade: %i\nSituação: Eleitor obrigatorio.", id);
            }
        }
    }

    return 0;
}
