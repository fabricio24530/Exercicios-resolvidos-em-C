Leia a nota de quatro aluno e mostre a media.

#include <stdio.h>
#include <stdlib.h>


int main(void)
{

    float Mnotas [4] [4] = {0};
    float Vmedia[4] = {0};
    float media = 0;
    float soma = 0;
    int l, c;

    printf("Insira as 4 notas do aluno 1:\n");
    for (l = 0; l< 4; ++l)
    {
        for (c = 0; c < 4; ++c)
        {
            scanf("%f", &Mnotas[l][c]);
            soma += Mnotas[l][c];
        }
        media = soma / 4;
        Vmedia[l] = media;
        media = 0;
        soma = 0;
        system("clear");
        if ( l == 3)
            {
                break;
            }
        printf("Insira as 4 notas do aluno %i:\n", l + 2);

    }
    printf("\n");
    for (l = 0; l < 4; ++l)
    {

            printf("A media do %iª aluno foi: %.2f\n", l + 1, Vmedia[l]);

    }

    return 0;
}
