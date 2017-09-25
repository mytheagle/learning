#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){

float idade;
float ano;
float x;

printf("Insira sua idade:\n");
scanf("%f", &idade);
printf("Em que ano foi registrado essa idade:\n");
scanf("%f", &ano);

x= ((2021-ano)+idade);

printf("Sua idade em 2021 e: %.0f anos", x);
}
