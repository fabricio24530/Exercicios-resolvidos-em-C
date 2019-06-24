O problema consiste em auxiliar um professor no fechamento das notas de uma turma. Para tanto, deve ser construído um programa que leia o código do aluno, o número de notas da disciplina e as notas. Calcule a média final de cada aluno e informe o número de alunos aprovados e reprovados. Para ser aprovado o aluno precisa obter média maior ou igual a 6. O programa é encerrado quando é informado o código de aluno 0.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int cod_aluno, num_notas, i, aprovados, reprovados;
    float media, nota, soma;

    aprovados = reprovados = 0;

    printf("Informe o codigo do aluno: \n");
    scanf("%i", &cod_aluno);

    while (cod_aluno != 0)

    {

        printf("Quantas notas serão computadas: \n");
        scanf("%i", &num_notas);
        i = 1;
        soma = 0;
        while ( i <= num_notas)
        {
            printf("Informe a %iº nota: \n", i);
            scanf("%f", &nota);
            soma = soma + nota;
            media = (soma / num_notas);
            i++;
        }

        if ( media >= 7)
        {
            aprovados++;
        }
        else
        {
            reprovados++;
        }
        printf("A media do aluno de codigo %iº foi de: %.2f\n\n", cod_aluno, media);
        printf("Informe o codigo do aluno: \n");
        scanf("%i", &cod_aluno);

    }
    printf("Total de aprovados: %i\n", aprovados);
    printf("Total de reprovados: %i\n", reprovados);

    return 0;
}
