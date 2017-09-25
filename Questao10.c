#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>


int main(int argc, char *argv[]){

float preco;
int qham, qche, qfri, qref;

printf("\n\nHamburguer................. R$ 3,00\nCheeseburger............... R$ 2,50\nFritas..................... R$ 2,50\nRefrigerante............... R$ 1,00\n\n");


printf("Quantos hamburgueres foram consumidos?\n");
scanf("%d", &qham);
preco= preco+(qham*3);
printf("Quantos cheeseburguers foram consumidos?\n");
scanf("%d", &qche);
preco= preco+(qche*2.5);
printf("Quantas fritas foram consumidas?\n");
scanf("%d", &qfri);
preco= preco+(qfri*2.5);
printf("Quantos Refrigerantes foram consumidos?\n");
scanf("%d", &qref);
preco= preco+(qref*1);

printf("Valor a ser pago e de R$ %.2f", preco);



}
