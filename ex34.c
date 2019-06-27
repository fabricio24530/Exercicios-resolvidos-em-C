Construa um programa que possibilite calcular a área total de uma residência (sala, cozinha, banheiro, quartos etc.).
O programa deve solicitar a entrada do nome, a largura e o comprimento de um determinado cômodo até que o nome do cômodo 
seja "FIM". O programa deve apresentar o valor total acumulado da área residencial.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int comodo, i, o, p, a, s, qtd_sala, qtd_cozinha, qtd_banheiro, qtd_quartos, qtd_comodo;
    float area_total, largura_sala, comprimento_sala, area_sala, soma_sala, largura_cozinha, comprimento_cozinha, area_cozinha,
          soma_cozinha, largura_banheiro, comprimento_banheiro, area_banheiro, soma_banheiro, largura_quarto,
          comprimento_quarto, area_quarto, soma_quarto, largura_comodo, comprimento_comodo, area_comodo, soma_comodo;

    soma_banheiro = soma_comodo = soma_cozinha = soma_quarto = soma_sala = 0;
    do
    {
        printf("Comodo:\n[1] - Sala\n[2] - Cozinha\n[3] - Banheiro\n[4] - Quarto\n[5] - Outros\n[0] - Sair\n");
        scanf("%i", &comodo);
        system("clear");
        switch (comodo)
        {

        case (1):
            printf("Quantidade de salas:\n");
            scanf("%i", &qtd_sala);
            system("clear");
            for (i = 1; i <= qtd_sala; i++)
            {
                printf("Largura da %iº sala: \n", i);
                scanf("%f", &largura_sala);
                system("clear");
                printf("Comprimento da %iº sala: \n", i);
                scanf("%f", &comprimento_sala);
                system("clear");
                area_sala = largura_sala * comprimento_sala;
                soma_sala = soma_sala + area_sala;
            }
            break;
        case (2):
            printf("Quantidade de cozinhas:\n");
            scanf("%i", &qtd_cozinha);
            system("clear");
            for (o = 1; o <= qtd_cozinha; o++)
            {
                printf("Largura da %iº cozinha: \n", o);
                scanf("%f", &largura_cozinha);
                system("clear");
                printf("Comprimento da %iº cozinha: \n", o);
                scanf("%f", &comprimento_cozinha);
                system("clear");
                area_cozinha = largura_cozinha * comprimento_cozinha;
                soma_cozinha = soma_cozinha + area_cozinha;
            }
            break;
        case (3):
            printf("Quantidade de banheiros:\n");
            scanf("%i", &qtd_banheiro);
            system("clear");
            for (p = 1; p <= qtd_banheiro; p++)
            {
                printf("Largura do %iº banheiro: \n", p);
                scanf("%f", &largura_banheiro);
                system("clear");
                printf("Comprimento do %iº banheiro: \n", p);
                scanf("%f", &comprimento_banheiro);
                system("clear");
                area_banheiro = largura_banheiro * comprimento_banheiro;
                soma_banheiro = soma_banheiro + area_banheiro;
            }
            break;
        case (4):
            printf("Quantidade de quartos:\n");
            scanf("%i", &qtd_quartos);
            system("clear");
            for (a = 1; a <= qtd_quartos; a++)
            {
                printf("Largura do %iº quarto: \n", a);
                scanf("%f", &largura_quarto);
                system("clear");
                printf("Comprimento do %iº quarto: \n", a);
                scanf("%f", &comprimento_quarto);
                system("clear");
                area_quarto = largura_quarto * comprimento_quarto;
                soma_quarto = soma_quarto + area_quarto;
            }
            break;
        case (5):
            printf("Quantidade de comodos fora da listagem:\n");
            scanf("%i", &qtd_comodo);
            system("clear");
            for (s = 1; s <= qtd_comodo; s++)
            {
                printf("Largura do %iº comodo: \n", s);
                scanf("%f", &largura_comodo);
                system("clear");
                printf("Comprimento do %iº comodo: \n", s);
                scanf("%f", &comprimento_comodo);
                system("clear");
                area_comodo = largura_comodo * comprimento_comodo;
                soma_comodo = soma_comodo + area_comodo;
            }
            break;
        }
    }
    while (comodo != 0);

    area_total = soma_comodo + soma_quarto + soma_banheiro + soma_cozinha + soma_sala;
    printf("area total da casa: %.2f", area_total);


    return 0;
}
