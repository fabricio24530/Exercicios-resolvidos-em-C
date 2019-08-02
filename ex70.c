/* Programa que verifique se um caracter é uma letra do alfabeto portugues*/
#include <stdio.h>
#include <string.h>

int intervalo(char x)
{
    if ((int)x >= 65 && (int)x <= 90 || (int)x >= 97 && (int)x <= 122)
        return 1;
    else
        return 0;
}

int main(void)
{
    char car;
    int teste;

    printf("Informe um caracter:\n");
    car = getchar();

    teste = intervalo(car);

    if (teste == 1)
        printf("O valor %c e uma letra do alfabeto", car);
    else
        printf("O valor %c não é uma letra do alfabeto", car);

    return 0;

}
