/*Metada de uma arvore de natal com letras, começando sempre com A e em cade nivel uma unica letra*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    unsigned short int num, i, j, x;
    
    x = 65;

    printf("Informe o numero de ramos:\n");
    scanf("%hu", &num);
    system("clear"); // limpa a tela em ambiente unix

    for(i=1; i <= num; i++)
    {
        for(j=1; j <= i; j++)
        {
            printf("%c ", (char)x);
                if (j < i)
                    continue; 
                else
                x++;
        }
        putchar('\n');
    }

    return 0;
}
