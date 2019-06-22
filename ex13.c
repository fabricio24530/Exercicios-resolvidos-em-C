Construa um programa que dado um número inteiro informe o mês correspondente.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;

    printf("Informe o numero correspondete ao mês desejado:");
    scanf("%i", &num);

    switch (num)
    {

    case 1:
        printf("O valor %i corresponde ao mês de: JANEIRO", num);
        break;
    case 2:
        printf("O valor %i corresponde ao mês de: FEVEREIRO", num);
        break;
    case 3:
        printf("O valor %i corresponde ao mês de: MARÇO", num);
        break;
    case 4:
        printf("O valor %i corresponde ao mês de: ABRIL", num);
        break;
    case 5:
        printf("O valor %i corresponde ao mês de: MAIO", num);
        break;
    case 6:
        printf("O valor %i corresponde ao mês de: JUNHO", num);
        break;
    case 7:
        printf("O valor %i corresponde ao mês de: JULHO", num);
        break;
    case 8:
        printf("O valor %i corresponde ao mês de: AGOSTO", num);
        break;
    case 9:
        printf("O valor %i corresponde ao mês de: SETEMBRO", num);
        break;
    case 10:
        printf("O valor %i corresponde ao mês de: OUTUBRO", num);
        break;
    case 11:
        printf("O valor %i corresponde ao mês de: NOVEMBRO", num);
        break;
    case 12:
        printf("O valor %i corresponde ao mês de: DEZEMBRO", num);
        break;
    default:
        printf("O valor %i nao corresponde a nenhum mês.", num);

    }

    return 0;

}
