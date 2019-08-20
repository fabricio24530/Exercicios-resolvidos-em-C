/*Sistema escolhe automaticamente uma quantidade de numeros, definida pelo usuario, em um cartão de jogo de azae*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QtdN 49
#define limite 7
#define apost_mini 6

int aposta()
{
    int n;
    do
    {
        printf("Quantos numeros quer apostar:");
        scanf("%d", &n);
    }
    while((n < apost_mini || n > QtdN) && n!= 0);
}

void inic_random() //Inicia o gerador com um numero que depende da hora da execução do programa
{
    long int ultime;
    time(&ultime);
    srand((unsigned)ultime);
}

void inic(int v[])// inicia com zero o vetor de controle dos numeros selecionados
{
    int i;

    for(i=0; i<QtdN; i++)
    {
        v[i] = 0;
    }
}

void gerar(int *v, int n)//Geração dos numeros da aposta
{
    int i, indice;
    for(i=0; i < n; i++)
    {
        indice = rand()%QtdN;
        if(v[indice] == 0)
            v[indice] = 1;
        else
            i--;
    }
}

void apresentar(int res[])
{
    int i;
    for(i=0; i <QtdN; i++)
    {
        if(res[i] == 0)
            printf(" %.2d", i+1);
        else
            printf(" XX");
        if ((i+1)%limite == 0)
            putchar('\n');
    }
}

int main(void)
{
    int vetor[QtdN];
    int num;

    inic_random();
    while(1)
    {
        inic(vetor);
        if((num = aposta())==0)
            break;
        gerar(vetor, num);
        apresentar(vetor);
    }
    return 0;
}
