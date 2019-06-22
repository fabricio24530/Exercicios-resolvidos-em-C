/*Escreva um programa que dado o raio de um círculo calcule sua área e o perímetro. A área é a superfície do
objeto, dada por A = pi.r² e o perímetro é a medida do contorno do objeto dado por P = 2pir. Dica: utilize as
funções intrínsecas vistas na unidade. */

#include <stdio.h>
#include <math.h>
#define M_PI 3.14

int main()
{
   float raio, area, perimetro;
   printf("Informe o raio da circunferência: \n");
   scanf("%f", &raio);
   area = M_PI * pow(raio, 2);
   perimetro = 2 * (M_PI) * raio;
   printf("A area vale: %.2f\n", area);
   printf("O perimeitro vale: %.2f", perimetro);
   return(0);
   
}
