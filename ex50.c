/*Elabore um programa que leia uma palavra e se a palavra tiver número ímpar de caracteres, imprima todas as suas consoantes.*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char nome[15];
    int tamanho, i;

    printf("Informe um nome:\n");
    scanf("%s", &nome);
    tamanho = strlen(nome);
    if ( tamanho % 2 == 0)
    {
        printf("%s", nome);

    }
    else
    {
        printf("Nome sem as vogais: ");
        for (i = 0; i < tamanho; i++)
        {
            if ((nome[i] != 'a') && (nome[i] != 'e') && (nome[i] != 'i') && (nome[i] != 'o') && (nome[i] != 'u'))
            {
                printf("%c", nome[i]);
            }
        }
    }
    return 0;
}

