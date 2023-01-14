#include <stdio.h>


int main (){

int x, c, d, u  ;

    puts("informe um numero inteiro de 3 digitos");
    scanf("%d", &x );

    printf("o numero informado e %d \n", x );

    c = x /100 ;
    x = x% 100 ;
    d = x / 10 ;
    x = x% 10 ;
    u = x ;

    printf("o inverso do numero informado e %d%d%d  \n", u, d, c);

    return 0;
}