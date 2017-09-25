#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>


int main(){

float h, w;
float area, peri;

printf("Informe a altura:\n");
scanf("%f", &h);

printf("Informe a largura:\n");
scanf("%f", &w);


area=h*w;
peri=(2*(h+w));

printf("\n\nDado altura igual a %.2f e largura igual a %.2f temos que:\n\nO perimetro do retangulo e de %f\ne a area do retangulo e de %f\n", h, w, peri, area);


}
