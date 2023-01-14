#include <stdio.h>

int main (){

int x, y, a, b, c, d, e  ;

puts("informe um numero inteiro de 5 digitos para a verrificacao de palındromo ");
scanf("%d", &x );
fflush(stdin);

y = x ;
a = x/10000 ;
x = x%10000 ;
b = x / 1000 ;
x = x%1000 ;
c = x/ 100 ;
x = x%100 ;
d = x/10 ;
e = x%10 ;

if (a==e && b==d){
    printf("o numero %d e um numero palındromo ", y );
}
else{
    printf("o numero %d nao e um numero palındromo ", y );
}

    return 0;
}