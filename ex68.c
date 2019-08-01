/*Função que mostre o maior entre dois numeros inseridos*/

#include <stdio.h>
#include <string.h>

int maior(int num, int num2)
{
    if(num > num2)
        return num;
    else
        return num2;
}

int main(void)
{
   int n1, n2;
   printf("Informe dois numeros inteiros:\n");
   scanf("%d %d", &n1, &n2);
   printf("O maior é: %d", maior(n1, n2));
}
