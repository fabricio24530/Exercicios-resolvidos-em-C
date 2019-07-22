/*Escreva um programa que disseque o numero de horas em minutos, segundos e decimos de segundo. O usuario deve escolher oq quer
ve */

#include <stdio.h>

int main(void)
{
    int hora;
    long int segundo, minuto, decisegundo;
    char escolha;

    printf("Informe a quantidade de horas:\n");
    scanf("%d", &hora);

    segundo = hora < 0 ? 0 : hora * 3600l;

    minuto = hora < 0 ? 0 : hora * 60l;

    decisegundo = hora < 0 ? 0 : hora * 36000l;

    getchar(); // Limpa o cache do teclado

    printf("O que deseja saber:\n[M] - Minutos\n[S] - Segundos\n[D] - Decimos de segundo\n");
    escolha = getchar();

    switch (escolha)
    {
        case 'm':
        case 'M':
            printf("O numero de minutos que contem em %d hora é de %ld minutos.", hora, minuto);
            break;
        case 's':
        case 'S':
            printf("O numero de segundos que contem em %d hora é de %ld segundos.", hora, segundo);
            break;
        case 'd':
        case 'D':
            printf("O numero de decimos de segundos que contem em %d hora é de %ld decimos de segundo", hora, decisegundo);
            break;
        default:
            printf("Opção invalida.\n");
            break;
    }


    return 0;
}
