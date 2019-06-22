Elabore um programa que receba o salário de um funcionário e o código do cargo e apresente o cargo, o valor do aumento e o novo salário. A Tabela abaixo apresenta os 
cargos.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float salario, aumento, nsalario;
    int cod;
    printf("Informe o salário R$:\n");
    scanf("%f", &salario);
    printf("Informe a função do funcionario:\n[1] - Servente\n[2] - Pedreiro\n[3] - Mestre de obras\n[4] - Tec. Segurança\n");
    scanf("%i", &cod);
    switch (cod)
    {
    case 1:
        aumento = salario * 0.4;
        nsalario = salario + aumento;
        printf("Para o cargo de Servente o aumento é de 40%% seu novo salario é de %.2f", nsalario);
        break;
    case 2:
        aumento = salario * 0.35;
        nsalario = salario + aumento;
        printf("Para o cargo de Pedreiro o aumento é de 35%% seu novo salario é de %.2f", nsalario);
        break;
    case 3:
        aumento = salario * 0.2;
        nsalario = salario + aumento;
        printf("Para o cargo de Mestre de obras o aumento é de 20%% seu novo salario é de %.2f", nsalario);
        break;
    case 4:
        aumento = salario * 0.1;
        nsalario = salario + aumento;
        printf("Para o cargo de Tec. segurança o aumento é de 10%% seu novo salario é de %.2f", nsalario);
        break;
    default:
        printf("Codigo de funçao invalida.");

    }

    return 0;

}


