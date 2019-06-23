#include <stdio.h>
#include <stdlib.h>
/*Aluno: Francisco Fabricio Paiva Lima
  Matricula: 1878138 - 5
  Obs: O sofware foi desenvolvido em linux, por isso algumas funções so irão funcionar no kernel linux.*/
int main()
{


    printf("========== BIBLIOTECA VERSAO BETA ==========\n\n");

    short int menu;
    short int cod_livro[5];
    char titulo[5][40];
    char autor[5][30];
    char editora[5][30];
    int i = 0;
    while (menu != 0)
    {
        printf("-------------------MENU---------------------\n\n");
        printf("[1] - Inserir novo cadastro\n[2] - Mostrar todos os cadastros\n[0] - Encerrar\n");
        printf("--------------------------------------------\n");
        scanf("%i", &menu);
        __fpurge(stdin); // Limpar o buffer para kernel linux

        system("clear"); // Para kernel linux
        //system("cls"); //Como o software foi desenvolvido usando um SO Gnu/Linux, esta função não funciona.

        switch (menu)
        {
        case 1:
            printf("\n=-=-=-=-=-=-=-=-Cadastro-=-=-=-=-=-=-=-=\n\n");
            int cont = 1;
            while (cont <= 5)
            {
                cod_livro[cont - 1] = cont;
                printf("Titulo do %iº livro:\n\n", cont);
                scanf("%s", &titulo[cont-1]);
                __fpurge(stdin);
                system("clear");
                printf("\n=-=-=-=-=-=-=-=-Cadastro-=-=-=-=-=-=-=-=\n\n");
                printf("Nome do %iº autor:\n\n", cont);
                scanf("%s", &autor[cont-1]);
                __fpurge(stdin);
                system("clear");
                printf("\n=-=-=-=-=-=-=-=-Cadastro-=-=-=-=-=-=-=-=\n\n");
                printf("Nome da %iº editora:\n\n", cont);
                scanf("%s", &editora[cont-1]);
                __fpurge(stdin);
                system("clear");
                printf("\n=-=-=-=-=-=-=-=-Cadastro-=-=-=-=-=-=-=-=\n\n");
                cont++;
            }
            break;

        case 2:
            if (cod_livro[0] == 0)
            {
                printf("\n\nLISTA VAZIA\n\n");
            }
            else
            {
                while (i < 5)
                {
                    printf("\nCod.: %i\nTitulo: %s\nAutor: %s\nEditora: %s\n\n", cod_livro[i],titulo[i], autor[i], editora[i]);
                    printf("--------------------------\n");
                    i++;
                }

            }
            break;
        case 0:
            printf("\n=-=-=-=-=-=-BIBLIOTECA FINALIZADA-=-=-=-=-=\n\n\n");
            exit(0); // Função para para o programa da biblioteca stdlib.h
            break;
        default:
            printf("\n\n***OPCAO INVALIDA!***\n\n");
        }
    }

    return 0;
}
