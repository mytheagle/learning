#include <stdio.h>
#include <stdlib.h>

int main(){

float p, mm;

printf("Informe o valor em polegadas:\n");
scanf("%f", &p);

mm=(p*25.4);

printf("%.1f polegadas e igual a %.1f milimetros\n", p, mm);

}
