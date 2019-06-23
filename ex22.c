 Classificar a pessoa pela idade.

#include <stdio.h>


int main()
{
    int idade;

    printf("Informe a idade:\n");
    scanf("%i", &idade);

    if ( idade >= 18 && idade <= 60)
    {
        printf("Esta é uma idade de uma pessoa adulta.");
    }
    else
    {
        if ( idade >= 10 && idade < 18)
        {
            printf("Esta é uma idade de um adolescente.");
        }
        else
        {
            if ( idade >=2 && idade < 10)
            {
                printf("Esta é uma idade de uma criança.");
            }
            else
            {
                if ( idade < 2)
                {
                    printf("Esta é uma idade de um bebe.");
                }
                else
                {
                    if ( idade > 60)
                    {
                        printf("Esta é uma idade de um idoso.");
                    }
                }
            }
        }
    }



    return 0;
}
