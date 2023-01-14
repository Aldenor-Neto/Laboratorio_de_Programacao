#include <stdio.h>

int main (){

    int x ;
    printf("informe um numero inteiro");
    scanf("%d", &x );
    fflush(stdin);
    printf("o triplo do valor informado e : %d", x * 3);
    printf("o quadrado do numero informado e ; %d", x * x );
    printf("a metade do numero informado e ; %d", x/2);
    return 0;
}