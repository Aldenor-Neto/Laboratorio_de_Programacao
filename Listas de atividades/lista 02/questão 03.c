#include <stdio.h>

int main (){

int f, i, x ;

puts("informe um numero inteiro para calcular o fatorial!");
scanf("%d", &f );
fflush(stdin);
x= 1 ;

for (i=1 ; i<=f ; i++){

x *=i ;
}

printf("o fatorial do numero informado e %d", x );
    return 0;
}