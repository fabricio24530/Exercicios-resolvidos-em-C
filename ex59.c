/* faca um programa que mostre os dias de um determinado mes usando switch mas sem usar break.*/
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
    case 3:
    case 5:
    case 7:
    case 9:
    case 11:
    case 12:
        printf("31 dias.");
    }
    switch (mes)
    {
    case 4:
    case 6:
    case 8:
    case 10:
        printf("30 dias.");
    }
    switch (mes)
    {
    case 2:
        printf("28 dias.");
    }

    return 0;
}
