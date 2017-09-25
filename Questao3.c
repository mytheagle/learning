#include <stdio.h>
#include <stdlib.h>

int main(){

float n1, n2, n3, media;

printf("Informe 3 notas, uma por vez:\n");
scanf("%f", &n1);
scanf("%f", &n2);
scanf("%f", &n3);

media=(n1+n2+n3)/3;

printf("Sua media e %f", media);

}
