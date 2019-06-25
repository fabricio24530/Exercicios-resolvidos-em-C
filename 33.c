Faça um programa que leia um conjunto de pedidos e calcule o total da compra. O pedido possui os seguintes campos: número, data
(dia, mês e ano), preço unitário e quantidade. A entrada de pedidos é encerrada quando o usuário informa zero como número do 
pedido.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num_pedido, quantidade;
    char data[15];
    float total, preco, soma;
    soma = 0;

    printf("Informe o numero do pedido: \n");
    scanf("%i", &num_pedido);
    
    while ( num_pedido != 0)
    {

        printf("Informe a data do pedido: \n");
        scanf("%s", &data);
        printf("Informe o preço do produto R$: \n");
        scanf("%f", &preco);
        printf("Informe a quantidade desejada: \n");
        scanf("%i", &quantidade);
        total = quantidade * preco;
        soma = soma + total;
        printf("Informe o numero do pedido: \n");
        scanf("%i", &num_pedido);
    }

    printf("O valor total foi de R$: %.2f", soma);

    return 0;
}
