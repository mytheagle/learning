#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>


int main(){

float ccarro, cfinal;

printf("Qual o valor de fabrica do carro?\n");
scanf("%f", &ccarro);
cfinal=(ccarro+(ccarro*0.72));

printf("O valor de final de um carro que sai da fabrica por R$ %.2f\nVai custar o consumidor final o valor de %.2f", ccarro, cfinal);
}
