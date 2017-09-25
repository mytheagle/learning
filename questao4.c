#include <stdio.h>
#include <stdlib.h>

int main(){

float n1, n2, n3, media;
float p1, p2, p3;

printf("Informe 3 notas, uma por vez:\n");
scanf("%f", &n1);
scanf("%f", &n2);
scanf("%f", &n3);
printf("Informe os 3 respectivos pesos, um por vez:\n");
scanf("%f", &p1);
scanf("%f", &p2);
scanf("%f", &p3);

media=((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);

printf("Sua media ponderada e %.2f", media);
}
