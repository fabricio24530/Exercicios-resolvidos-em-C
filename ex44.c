/*Realizar um cadastro de clientes utilizando estruturas e vetores:*/

#include <stdio.h>

struct pessoa
{
    int idade;
    float peso;
    float altura;
    char nome[20];
};

int main(void)
{
    struct pessoa cliente[3];
    int i = 0;

    for (i = 0; i < 3; ++i)
    {
        printf("Nome do %iº cliente:\n", i + 1);
        scanf("%s", &cliente[i].nome);
        printf("Peso do %iº cliente:\n", i + 1);
        scanf("%f", &cliente[i].peso);
        printf("Idade do %iº cliente:\n", i + 1);
        scanf("%i", &cliente[i].idade);
        printf("Altura do %iº cliente:\n", i + 1);
        scanf("%f", &cliente[i].altura);

    }

    printf("\n");

    for (i = 0; i < 3; ++i)
    {
        printf("Nome do %iº cliente: %s\n", i + 1, cliente[i].nome);
        printf("Peso do %iº cliente: %f\n", i + 1, cliente[i].peso);
        printf("Altura do %iº cliente: %f\n", i + 1, cliente[i].altura);
        printf("Idade do %iº cliente: %i\n", i + 1, cliente[i].idade);
        printf("\n");
    }

    return 0;
}
