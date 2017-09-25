#include <stdio.h>
#include <stdlib.h>

int main(){

float m, dec, cent, mili;

printf("Informe um valor em metros:\n");
scanf("%f", &m);

dec=(m*10);
cent=(m*100);
mili=(m*1000);

printf("%.2f metros e o mesmo que %f decimetros, %.2f centimetros e %.2f milimetros\n", m, dec, cent, mili);



}
