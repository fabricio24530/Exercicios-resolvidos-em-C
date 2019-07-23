/*Programa que informa a quantidade de dias de um determinado mes somente usando switch*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned short int mes;

    printf("Informe o mês:\n[1] - Janeiro\n[2] - Fevereiro\n[3] - Março\n[4] - Abril\n[5] - Maio\n[6] - Junho\n[7] - Julho\n[8] - Agosto\n[9] - Setembro\n[10] - Outubro\n[11] - Novembro\n[12] - Dezembro\n");
    scanf("%hu", &mes);

    switch (mes)
    {
    case 1:
        printf("31 dias.");
        break;
    case 2:
        printf("28 dias.");
        break;
    case 3:
        printf("31 dias.");
        break;
    case 4:
        printf("30 dias.");
        break;
    case 5:
        printf("31 dias.");
        break;
    case 6:
        printf("30 dias.");
        break;
    case 7:
        printf("31 dias.");
        break;
    case 8:
        printf("30 dias.");
        break;
    case 9:
        printf("31 dias.");
        break;
    case 10:
        printf("30 dias.");
        break;
    case 11:
        printf("31 dias.");
        break;
    case 12:
        printf("31 dias.");
    default:
        printf("opção invalida.");
        break;
    }

    return 0;
}
