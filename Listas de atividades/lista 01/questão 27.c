#include <stdio.h>
#include <math.h>

int main(){

float x1, x2,x3, a, b ;

puts("informe o primeiro valor");
scanf("%f", &x1 );
fflush(stdin);

puts("informe o segundo valor");
scanf("%f", &x2);
fflush(stdin);

puts("informe o terceiro valor");
scanf("%f", &x3 );

a = x1*x2*x3 ;
b = (float)1/3 ;

printf("a media aritemetica dos valores informados e %.2f \n ", (x1+x2+x3) / 3 );
printf("a media geometrica dos valores informads e %.2f \n", pow(a,b) );

    return 0;
}