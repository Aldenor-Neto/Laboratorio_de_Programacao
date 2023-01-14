#include <stdio.h>
#include <math.h>

int main(){

float x1, x2, y1, y2, d, a, b ;

puts("informe as coordenadas do primeiro ponto");
puts("x =");
scanf("%f", &x1 );
fflush(stdin);

puts("y = ");
scanf("%f", &y1 );
fflush(stdin);

puts("informe as coordenadas do segundo ponto");
puts("x =");
scanf("%f", &x2 );
fflush(stdin);

puts("y =");
scanf("%f", &y2 );
fflush(stdin);

a = pow((x2-x1),2);
b = pow((y2-y1), 2);
d = sqrt(a+b);

printf("a distancia entre os pontos informados e %.2f", d );

    return 0;
}