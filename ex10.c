vamos construir um programa que permita ao usuário escolher que operação(1 – soma, 2 – subtração, 3 – multiplicação e 
4 – divisão) deseja realizar com dois números.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int soma, sub, mul, num, num2, escolha;
    float div;

    printf("Informe o primeiro numero:\n");
    scanf("%i", &num);
    printf("Informe o segundo numero:\n");
    scanf("%i", &num2);
    printf("Escolha uma opçao:\n[1] - Somar\n[2] - Subtrair\n[3] - Multiplicar\n[4] - Dividir\n");
    scanf("%i", &escolha);
    switch (escolha)
    {
        case 1:
            soma = num + num2;
            printf("%i + %i = %i", num, num2, soma);
            break;
        case 2:
            sub = num - num2;
            printf("%i - %i = %i", num, num2, sub);
            break;
        case 3:
            mul = num * num2;
            printf("%i X %i = %i", num, num2, mul);
            break;
        case 4:
            div = (float)num / num2;
            printf("%i / %i = %.2f", num, num2, div);
            break;
        default: printf("Valor incorreto.");
    }



return 0;
}
