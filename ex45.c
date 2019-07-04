/*O problema consiste em elaborar um cadastro para 20 livros contendo as seguintes informações: código, título, autor, área,
ano e editora. Desenvolver um menu com as seguintes opções:
1. Cadastrar os livros.
2. Imprimir as informações dos livros.
3. Pesquisar livros por código.
4. Ordenar os livros por ano.
5. Sair do programa.*/

#include <stdio.h>

struct itens
{
    int codigo;
    int ano;
    char titulo[20];
    char autor[20];
    char area[15];
    char editora[20];
};

int main(void)
{
    struct itens cadastro[20] = {0};
    int i, o, p, e, menu, menu2, menu3, menu4, menu5, busca, achei, aux, q, w;
    i = o = p = q = e = w = aux =menu = menu2 = menu3 = busca = achei = menu4 = menu5 = 0;

    do
    {
        printf("Escolha uma opção:\n[1] - Cadastrar livros\n[2] - Livros cadastrados\n[3] - Pesquisa por codigo\n[4] - Ordenar livros por ano\n[5] - Sair\n");
        scanf("%i", &menu);
        system("clear");

        switch (menu)
        {
        case 1:

            for ( i = 0; i < 20; ++i)
            {
                printf("Codigo do livro:\n");
                scanf("%i", &cadastro[i].codigo);
                system("clear");
                printf("Titulo do livro:\n");
                scanf("%s", &cadastro[i].titulo);
                system("clear");
                printf("Autor do livro:\n");
                scanf("%s", &cadastro[i].autor);
                system("clear");
                printf("Area do livro:\n");
                scanf("%s", &cadastro[i].area);
                system("clear");
                printf("Ano do livro:\n");
                scanf("%i", &cadastro[i].ano);
                system("clear");
                printf("Editora do livro:\n");
                scanf("%s", &cadastro[i].editora);
                system("clear");
                printf("Livro cadastrado com sucesso!\n");
                system("clear");
                printf("Deseja cadastrar outro livro:\n[1] - Sim\n[2] - Não\n");
                scanf("%i", &menu2);
                system("clear");
                if (menu2 == 2)
                {
                    break;
                }
            }

            break;
        case 2:
            printf("Livros cadastrados.\n\n");
            for ( o = 0; o < 20; ++o)
            {
                printf("Codigo: %i\n", cadastro[o].codigo);
                printf("Titulo: %s\n", cadastro[o].titulo);
                printf("Autor: %s\n", cadastro[o].autor);
                printf("Area: %s\n", cadastro[o].area);
                printf("Ano: %i\n", cadastro[o].ano);
                printf("Editora: %s\n", cadastro[o].editora);
                printf("\n");
            }
            printf("[1] - Menu principal\n[2] - Sair\n");
            scanf("%i", &menu4);
            system("clear");
            if (menu4 == 2)
            {
                menu = 5;
            }
            break;
        case 3:

            do

            {
                printf("Informe o codigo do livro:\n");
                scanf("%i", &busca);
                system("clear");
                while (achei == 0 && p < 20)
                {
                    if (busca == cadastro[p].codigo)
                    {
                        achei = 1;
                        break;
                    }
                    ++p;
                }
                if (achei == 1)
                {
                    printf("Codigo: %i\n", cadastro[p].codigo);
                    printf("Titulo: %s\n", cadastro[p].titulo);
                    printf("Autor: %s\n", cadastro[p].autor);
                    printf("Area: %s\n", cadastro[p].area);
                    printf("Ano: %i\n", cadastro[p].ano);
                    printf("Editora: %s\n", cadastro[p].editora);
                    printf("\n");
                }
                else
                {
                    printf("Codigo nao cadastrado.\n");
                }
                printf("Deseja procurar outro livro:\n[1] - Sim\n[2] - Não.\n");
                scanf("%i", &menu3);
                if (menu3 == 1)
                {
                    achei = 0;
                    system("clear");
                }
                system("clear");
            }
            while(menu3 != 2);

            break;

        case 4:

            for(q = 0; q < 19; ++q)
            {
                for(w = q + 1; w < 20; ++w)
                {
                    if (cadastro[q].ano > cadastro[w].ano)
                    {
                        aux = cadastro[q].ano;
                        cadastro[q].ano = cadastro[w].ano;
                        cadastro[w].ano = aux;
                    }
                    if ((cadastro[q].ano == 0) && (cadastro[w].ano != 0 ))
                    {
                        aux = cadastro[q].ano;
                        cadastro[q].ano = cadastro[w].ano;
                        cadastro[w].ano = aux;
                    }
                }
            }
            for (e = 0; e < cadastro[i].codigo; ++e)
            {
                printf("Codigo: %i\n", cadastro[e].codigo);
                printf("Titulo: %s\n", cadastro[e].titulo);
                printf("Autor: %s\n", cadastro[e].autor);
                printf("Area: %s\n", cadastro[e].area);
                printf("Ano: %i\n", cadastro[e].ano);
                printf("Editora: %s\n", cadastro[e].editora);
                printf("\n");
            }
            printf("Deseja retornar ao menu principal:\n[1] - Sim\n[2] - Não.\n");
            scanf("%i", &menu5);
            if (menu5 == 1)
            {

                system("clear");
            }
            else
            {
                menu = 5;
            }

        }

    }
    while(menu != 5);

    return 0;
}
