 Peça uma letra e diga se ela esta no alfabeto antes ou depois de "D". Se tiver antes mostre a letra escolhida em minusculo, caso esteja depois mostre em maiusculo.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Escreva uma letra:");
    scanf("%c", &c);

    if (c > 'd')
    {
        printf("Sua letra esta depois de d: %c", toupper(c));
    }
    else
    {
        printf("Sua letra esta antes de d: %c", tolower(c));
    }

    return 0;
}
