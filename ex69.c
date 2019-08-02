/*Função que devolva o maior entre tres inteiros*/
#include <stdio.h>
#include <string.h>

long int maior(x, y, z)
{
    if(x>y && x>z)
        return x;
    else
        if(y>x && y>z)
            return y;
            else
                if(z>x && z>y)
                    return z;
}

int main(void)
{
    long int n1, n2, n3;
    
    printf("Informe tres valores:\n");
    scanf("%ld %ld %ld", &n1, &n2, &n3);

    printf("O maior entre os três é: %ld", maior(n1, n2, n3));
    return 0;
}
