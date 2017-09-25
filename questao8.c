#include <stdio.h>
#include <stdlib.h>

int main(){

float c, f;

printf("Informe o valor em graus Fahrenheit:\n");
scanf("%f", &f);

c=((f-32)*5)/9;

printf("O valor de %.2f graus fahrenheit e de %.2f graus Celsius", f, c);
}
