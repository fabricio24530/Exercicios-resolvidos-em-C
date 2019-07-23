/* Programa que verifique se um ano é bissexto ou não*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   unsigned short int ano;

    printf("Informe o ano atual:\n");
    scanf("%hu", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0 ) || (ano % 400 == 0 && ano % 100 != 0))
        printf("O ano de %hu é bissexto.", ano);
    else
        printf("O ano de %hu não é bissexto", ano);

    return 0;
}
