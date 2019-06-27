 Elabore um programa que receba a idade, peso, sexo e o estado civil de várias pessoas e imprima a quantidade de pessoas 
casadas, solteiras, separadas e viúvas. Apresente a média de idade e de peso. O algoritmo finaliza quando for informado o
valor zero para idade.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, sexo, est_civil, media_idade, soma_idade, cont, cont_casado, cont_solteiro, cont_separado, cont_viuvo, cont_masculino, cont_femenino, cont_idade, cont_peso;
    float peso, media_peso, soma_peso;

    soma_peso = soma_idade = cont_masculino = cont_femenino = cont_casado = cont_separado = cont_solteiro = cont_viuvo =  0;
    cont = 0;

    do
    {
        printf("Idade: \n");
        scanf("%i", &idade);
        if (idade == 0)
        {
            system("clear");
            break;

        }

        soma_idade = soma_idade + idade;
        system("clear");
        printf("Peso: \n");
        scanf("%f", &peso);

        soma_peso = soma_peso + peso;
        system("clear");
        printf("Sexo:\n[1] - Masculino\n[2] - Femenino\n");
        scanf("%i", &sexo);
        if (sexo == 1)
        {
            cont_masculino++;
        }
        else
        {
            if ( sexo == 2)
            {
                cont_femenino++;
            }
        }
        system("clear");
        printf("Estado civil:\n[1] - Casado\n[2]- Solteiro\n[3] - Separado\n[4] - Viuvo\n");
        scanf("%i", &est_civil);
        switch (est_civil)
        {
        case (1):
            cont_casado++;
            break;
        case (2):
            cont_solteiro++;
            break;
        case (3):
            cont_separado++;
            break;
        default:
            cont_viuvo++;

        }
        system("clear");
        cont++;

    }
    while (idade != 0);

    if (cont != 0)
    {
        media_idade = soma_idade / cont;
        media_peso = (float) soma_peso / cont;
    }

    printf("Media de idade: %i anos.\n", media_idade);
    printf("Media de peso: %.2f Kg.\n", media_peso);
    printf("Quantidade de homens: %i.\n", cont_masculino);
    printf("Quantidade de mulheres: %i.\n", cont_femenino);
    printf("Quantidade de casados: %i.\n", cont_casado);
    printf("Quantidade de solteiros: %i.\n", cont_solteiro);
    printf("Quantidade de separados: %i.\n", cont_separado);
    printf("Quantidade de viuvos: %i.\n", cont_viuvo);



    return 0;
}
