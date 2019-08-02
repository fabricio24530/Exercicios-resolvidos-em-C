/*Verificar se uma letra é vogal ou consoante*/
#include <stdio.h>
#include <string.h>

int vogal(char x)
{
    if(x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'I' || x == 'i' || x == 'O' || x == 'o' || x == 'u' || x =='U')
        return 1;
    else
        return 0;
}

int main(void)
{

    char letra;
    int t;

    printf("Informe uma letra:\n");
    letra = getchar();

    t = vogal(letra);

    if (t == 1)
        printf("A letra %c é uma vogal.", letra);
    else
        printf("A letra %c é uma consoante.", letra);

    return 0;
}
