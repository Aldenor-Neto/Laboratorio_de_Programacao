#include <stdio.h>
#include <math.h>

int main () {

unsigned char a ;
int p ;

puts("informe um valor");
scanf("%d", &a );
fflush(stdin);

puts("informe a posicao");
scanf("%d", &p );
fflush(stdin);
p = pow(2, p);
a = a&~p ;

printf("valor em hexa= %x ", a );

    return 0;
}