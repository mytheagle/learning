#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){

int segundost, segundos, minutos, horas;


printf("Insira qualquer hora em segundos:\n");
scanf("%d", &segundost);


segundos=(segundost % 60);
minutos=((segundost/60)% 60);
horas=((segundost/60)/60)%60;

printf("%d horas, %d minutos e %d segundos", horas, minutos, segundos);
}
