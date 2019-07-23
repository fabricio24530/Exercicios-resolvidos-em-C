/* Pograma que diga os dias de um mes usando somente if-else*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    unsigned short int mes;

    printf("Informe o mês:\n[1] - Janeiro\n[2] - Fevereiro\n[3] - Março\n[4] - Abril\n[5] - Maio\n[6] - Junho\n[7] - Julho\n[8] - Agosto\n[9] - Setembro\n[10] - Outubro\n[11] - Novembro\n[12] - Dezembro\n");
    scanf("%hu", &mes);

    if (mes == 1)
    {
        printf("Janeiro possui 31 dias.");
    }
    else
    {
        if (mes == 2)
        {
            printf("Fevereiro possui 28 dias.");
        }
        else
        {
            if (mes == 3)
            {
                printf("Março possui 31 dias.");
            }
            else
            {
                if (mes == 4)
                {
                    printf("Abril possui 30 dias");
                }
                else
                {
                    if (mes == 5)
                    {
                        printf("Maio possui 31 dias.");
                    }
                    else
                    {
                        if (mes == 6)
                        {
                            printf("Junho possui 30 dias.");
                        }
                        else
                        {
                            if (mes == 7)
                            {
                                printf("Julho possui 31 dias.");
                            }
                            else
                            {
                                if (mes == 8)
                                {
                                    printf("Agosto possui 31 dias");
                                }
                                else
                                {
                                    if (mes == 9)
                                    {
                                        printf("Setembro possui 30 dias.");
                                    }
                                    else
                                    {
                                        if (mes == 10)
                                        {
                                            printf("Outubro possui 31 dias.");
                                        }
                                        else
                                        {
                                            if ( mes == 11)
                                            {
                                                printf("Novembro possui 30 dias.");
                                            }
                                            else
                                            {
                                                if (mes == 12)
                                                {
                                                    printf("Dezembro possui 31 dias");
                                                }
                                                else
                                                    printf("Opção incorreta.");
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}



