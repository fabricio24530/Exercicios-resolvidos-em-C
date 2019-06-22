/*Escreva um programa que leia o nome de uma pessoa e escreva a seguinte men-
sagem "Bem-vindo à disciplina de Algoritmos e Lógica de Programação II, Fula-
no". */
#include <stdio.h>
int main()
{

char nome[30];
printf("Informe seu nome: \n");
scanf("%s", &nome);
printf("Seja bem vindo ao curso de linguagem c, %s", nome);
return(0);

}

