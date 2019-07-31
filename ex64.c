/*Programa que imprima meia arvore de natal feita de asteriscos*/

#include <stdio.h>
#include <string.h>

int main(void)
{

    char x = '*';
    unsigned short int num, i, j;

    printf("Informe o numero de ramos:\n");
    scanf("%hu", &num);
    system("clear"); // limpa a tela em ambiente unix

    for(i=1; i <= num; i++)
    {
        for(j=1; j <= i; j++)
        {
            printf("%c ", x);
        }
        putchar('\n');
    }

    return 0;
}
