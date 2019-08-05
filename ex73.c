/*Jogo da velha*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DIM 3

void inicio(char m[][DIM])
{
    int i, j;

    for(i=0; i<DIM; i++)
    {
        for(j=0; j<DIM; j++)
        {
            m[i][j] = ' ';
        }
    }

}

void velha(char m[DIM][DIM])
{
    int i, j;
    for (i = 0; i<DIM; i++)
    {
        for(j = 0; j<DIM; j++)
        {
            printf(" %c %c", m[i][j], j == DIM-1 ?' ':'|');
        }
        if (i != DIM-1)
            printf("\n----------\n");
    }
}

int main(void)
{

    char jogo[DIM][DIM];
    char ch = 'o', pause;
    int jogadas = 0;
    int posLinha, posColuna, l, c;

    inicio(jogo);
    while(1)
    {

        system("clear");

        velha(jogo);

        printf("\n\nInforme a linha e a coluna que deseja marcar:");
        scanf("%d %d", &posLinha, &posColuna);
        if((posLinha > 3 || posLinha <= 0) || (posColuna > 3 || posColuna <= 0))
        {
            printf("Valores incorretos!!!\n[C] - para continuar\n[S] - Para sair\n");
            scanf(" %c", &pause);
        }

        else
        {

            posColuna--;
            posLinha--;
            if(jogo[posLinha][posColuna] == ' ')
            {
                jogo[posLinha][posColuna] = ch = (ch == 'o')?'x':'o'; // troca as marcações
                jogadas++;
            }

            else
            {
                printf("Posição ocupuda, escolha outra!!\n");
            }
        }
        if (jogadas == DIM * DIM || (pause == 'S' || pause == 's'))
        {
            system("clear");
            printf("Fim do jogo.\n\n");
            break;
        }

    }


    return 0;
}
