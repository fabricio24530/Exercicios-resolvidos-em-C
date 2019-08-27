#include <stdio.h>

int main(void)
{
   char nome[20];

   while(1)
   {
        printf("Informe um nome:");
        gets(nome);
        if (nome[0] != '\0')
        puts(nome);
        else
        break;
   }

    return 0;
}
