#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>


int main(){

char vnome[32];
int carro;
float vtotal;

printf("Qual o nome do vendedor?\n");
scanf("%s", &vnome);

printf("Quantos carros foram vendidos?\n");
scanf("%d", &carro);

vtotal= 500+(carro*50)+((1000*carro)% 5);

printf("O valor que %s tem a receber e de %f", vnome, vtotal);

}
