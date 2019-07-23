/* programa que verifique se uma data inserida é valida*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned short int dia, mes, ano;

    printf("Informe uma data no formato dd - mm - aaaa:\n");
    scanf("%hu %hu %hu", &dia, &mes, &ano);

    if (( dia <= 0 || dia > 31) || (mes <= 0 || mes > 12) || (ano < 1000 || ano > 10000))
        printf("Data invalida.");
    else
        printf("%hu - %hu - %hu\n", dia, mes, ano);

    return 0;
}
