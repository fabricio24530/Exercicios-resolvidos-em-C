/*Pedir um numero e mostrar todos os inteiros, que nao sejam multiplo de 3, ate chegar no primeiro multiplo de 10, usando loop
infinito*/

#include <stdio.h>
#include <string.h>

int main(void)
{

    int num, i;

    printf("Informe um numero:\n");
    scanf("%d", &num);

    for(i=num; ; i++) //loop infinito
    {
        if (i % 10 == 0)
            break;
        else
            if (i % 3 == 0)
                continue;
        printf("%d\n", i);
    }

    return 0;
}
