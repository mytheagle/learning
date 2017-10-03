#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {

    int a, b, c;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a>c && a>b){

    printf("O maior numero e %d",a);
    }
    else if(c>b){
    printf("O maior numero e %d",c);
    }
    else{
    printf("O maior numero e %d",b);
    }
    return 0;
    }
