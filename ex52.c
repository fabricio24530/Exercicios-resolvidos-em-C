/*Um programa que solicite uma determinada quantidade de segundos e retorne o total de horas, minutos e segundos
equivalentes*/

#include <stdio.h>

int main(void)
{
    unsigned long int seg, horas, minutos, segundos;


    printf("Informe a quantidade de segundos:\n");
    scanf("%d", &seg);

    horas = seg / 3600;
    minutos = (seg % 3600) / 60;
    segundos = seg % 60;

    printf("A quantide %d segundos corresponde a:\n%d horas\n%d minutos\n%d segundos", seg, horas, minutos, segundos);

    return 0;
}
