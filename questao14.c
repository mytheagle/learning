#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>


int main(){

float salat, rej, rejsal;

printf("Qual o valor do salario a ser reajustado?\n");
scanf("%f", &salat);

printf("Qual o percentual de reajuste:\n");
scanf("%f", &rej);

rejsal=salat+(salat*(rej/100));

printf("Seu novo salario e de R$ %.2f de acordo com o reajuste de %.0f%% porcento.", rejsal, rej);



}
