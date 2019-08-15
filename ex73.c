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
    char ch = 'o', pause, pause2;
    int jogadas = 0;
    int posLinha, posColuna, l, c;

    inicio(jogo);
    while(1)
    {

        system("clear");

        velha(jogo);

        printf("\n\nInforme a linha e a coluna que deseja marcar:");
        scanf("%d %d", &posLinha, &posColuna);
        if((posLinha > 3 || posLinha < 1) || (posColuna > 3 || posColuna < 1))
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
                printf("Posição ocupada, deseja escolher outra?\n[S]-Sim\n[N]-Não\n");
                scanf(" %c", &pause2);

            }
        }
        if (jogadas == 9 || (pause == 'S' || pause == 's') || (pause2 == 'N' || pause2 == 'n'))
        {
            system("clear");
            printf("Fim do jogo.\n\n");
            break;
        }
        else
        {
            if((jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2] && jogo[0][0] != ' ') || (jogo[0][2] == jogo[1][1] && jogo[1][1] == jogo[2][0] && jogo[0][2] != ' ') || (jogo[0][0] == jogo[0][1] && jogo[0][1] == jogo[0][2] && jogo[0][0] != ' ') || (jogo[1][0] == jogo[1][1] && jogo[1][1] == jogo[1][2] && jogo[1][0] != ' ') || (jogo[2][0] == jogo[2][1] && jogo[2][1] == jogo[2][2] && jogo[2][0] != ' ') || (jogo[0][0] == jogo[1][0] && jogo[1][0] == jogo[2][0] && jogo[0][0] != ' ') || (jogo[0][1] == jogo[1][1] && jogo[1][1] == jogo[2][1] && jogo[0][1] != ' ') || (jogo[0][2] == jogo[1][2] && jogo[1][2] == jogo[2][2] && jogo[0][2] != ' '))
            {
                system("clear");
                velha(jogo);
                putchar('\n');
                putchar('\n');
                printf("O jogador \"%c\" ganhou", jogo[0][0]);
                break;
            }
        }

    }


    return 0;
}
