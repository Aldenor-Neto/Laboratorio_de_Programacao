#include <stdio.h>
int main() {

    int a, b, x ;

puts("informe o primeiro valor");
scanf("%d", &a);
fflush(stdin);

puts("informe o segundo valor");
scanf("%d", &b ) ;
fflush(stdin);

printf("os valores armazenados inicialmente em A e B sao %d", a);
printf("e %d", b);

x = a ;
a= b ;
b = x ;

printf("os valores trocados sao A = %d", a );
printf("e B = %d", b );

return 0;
}