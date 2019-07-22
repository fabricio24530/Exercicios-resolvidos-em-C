/* Escreva um programa que lei uma operação binaria entre dois numeros e mostre o resultado*/
#include <stdio.h>

int main(void)
{
    int n1 , n2;
    char op;

    printf("Escreva um operação com dois numeros inteiros:\n");
    scanf("%d %c %d", &n1, &op, &n2);

    switch (op)
    {
        case '+':
            printf("%d + %d = %d", n1, n2 , n1 + n2);
            break;
        case '-':
            printf("%d - %d = %d", n1, n2, n1 - n2);
            break;
        case '*':
        case '.':
        case 'x':
        case 'X':
            printf("%d x %d = %d", n1, n2, n1 * n2);
            break;
        case '/':
            printf("%d / %d = %.2f", n1, n2, (float) n1 / n2);
            break;
        default:
            printf("Operaçao inexistente.");
            break;

    }

    return 0;
}
