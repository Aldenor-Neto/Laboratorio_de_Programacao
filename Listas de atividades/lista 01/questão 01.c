#include <stdio.h>

int main (){

float x ;

puts ("na expressao x = 7 + 3*6/2 e realizada primeiramente a multiplicacao em seguida a divisao, pois segue a precedencia da esquerda para a direita e em seguida a soma!");
x = (float)7 + 3*6/2 ;
printf("o resultado da expressao x = 7 + 3*6/2 e %.0f \n", x );

puts("na expressao 2%2 + 2*2-2/2, sera realizado primeiro a multiplicacao e divisao nessa ordem pois tem a precedencia da esquerda para a direita e depois o modulo, soma e subtracao!");
x = 2%2 + (float)2*2-2/2 ;
printf("o resultado de x na expressao x = 2%2 + 2*2-2/2 e %.0f \n", x );

puts ("na expressao x = (3 * 9 * (3 + (9*3/ (3) ) ) ) sera realizada primeiramente as expressoes dos parentes internos com a realizacoes das operacoes de multiplicacao e divisao seguidos de soma e subtracao obdecendo a ordem da esquerda para a direita");
x = (3 * 9 * (3 + (9*3/ (3) ) ) );
printf("o resultado da expressao x = (3 * 9 * (3 + (9*3/ (3) ) ) ); e %.0f \n", x );

    return 0;
}