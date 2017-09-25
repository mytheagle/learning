#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>


int main(){

int elet;

float branco, nulo, vali, pc;

printf("Informe a quantidade de eleitores de um certo municipio:\n");
scanf("%d", &elet);

printf("Informe a quantidade de votos brancos:\n");
scanf("%f", &branco);

printf("Informe a quantidade de votos nulos:\n");
scanf("%f", &nulo);

vali=((nulo+branco)-elet);
/* printf("Informe a quantidade de votos vali:\n");
scanf("%f", &vali);
*/
branco =(((((elet-branco)/elet)*100)-100)*(-1));
nulo = (((((elet-nulo)/elet)*100)-100)*(-1));
vali = (((((elet-vali)/elet)*100)-100)*(1));

printf("De %d eleitores de um certo municipio temos:\n\n%.0f porcento de votos brancos.\n%.0f porcento de votos nulos.\n%.0f porcento de votos validos.", elet, branco, nulo, vali);


}
