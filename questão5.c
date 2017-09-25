#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){

float n1;

printf("Insira um numero:\n");
scanf("%f", &n1);

double sqr = pow(n1,2);
double cb  = pow(n1,3);

double sr  = sqrt(n1);

double cr  = cbrt(n1);

printf("%.2f elevado ao quadrado e %.2f\n", n1, sqr);
printf("%.2f elevado ao cubo e %.2f\n", n1, cb);
if(n1 >= 0)
    {
        printf("A raiz quadrada de %.2f e %.2f\n", n1, sr);
    }
    else{
        printf("Favor inserir um numero positivo\n");
    }
printf("A raiz cubica de %.2f e %.2f\n", n1, cr);





}
