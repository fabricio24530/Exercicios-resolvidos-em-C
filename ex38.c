/*A prefeitura está coletando informações sobre o salário e o número de filhos dos habitantes. A leitura de dados é realizada
até que seja informado o valor -1 para o salário. Apresente a média de salário da população, a média de filhos e o 
maior salário.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int filho, cont;
    float salario, media_salario, media_filho, soma_salario, soma_filho, maior;

    cont = soma_salario = soma_filho = maior = 0;

    while(salario >= 0)
    {
        printf("Informe o salario R$: \n");
        scanf("%f", &salario);
        system("clear");
        if (salario <= 0)
        {
            break;
        }
        soma_salario = soma_salario + salario;

        if ( salario > maior)
        {
            maior = salario;
        }
        printf("Informe o numero de filhos: \n");
        scanf("%i", &filho);
        system("clear");
        soma_filho = soma_filho + filho;
        cont++;
    }

    media_filho = (float)soma_filho / cont;
    media_salario = (float)soma_salario / cont;

    printf("Media de filhos: %.1f\n", media_filho);
    printf("Media de salarios: R$ %.2f\n", media_salario);
    printf("Maior salario: R$ %.2f", maior);


    return 0;
}
