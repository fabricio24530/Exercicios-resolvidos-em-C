Elabore um programa que calcule a área de um trapézio.

#include <stdio.h>

int main()
{
    float b1, b2, alt, area;
    printf("Informe o valor da base menor: \n");
    scanf("%f", &b1);
    printf("Informe o valor da base maior: \n");
    scanf("%f", &b2);
    printf("Informe o valor da altura: \n");
    scanf("%f", &alt);
    area = (b1 + b2)/2 * alt;
    printf("A are do trapezio é de: %.2f m²", area);
    return(0);
}
