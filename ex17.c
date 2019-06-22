Elabore um programa que receba o nome e a idade de uma pessoa e informe o nome, a idade e o valor da mensalidade do plano de 
saúde.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;

    printf("Informe sua idade:");
    scanf("%i", &id);

    if (id <= 18)
    {
        printf("Para a idade de %i anos, a mensalidade é de: R$ 50,00.", id);
    }
    else
    {
        if ( id >=19 && id <= 29)
        {
            printf("Para a idade de %i anos, a mensalidade é de: R$ 70,00.", id);
        }
        else
        {
            if ( id >= 30 && id <= 45)
            {
                printf("Para a idade de %i anos, a mensalidade é de: R$ 90,00.", id);
            }
            else
            {
                if ( id >= 46 && id <= 65)
                {
                    printf("Para a idade de %i anos, a mensalidade é de: R$ 130,00.", id);
                }
                else
                {
                    if ( id > 65)
                    {
                        printf("Para a idade de %i anos, a mensalidade é de: R$ 170,00.", id);
                    }
                }
            }
        }
    }


    return 0;
}
