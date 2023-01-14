#include <stdio.h>

int main(){
    int x ;
    puts("informe um numero inteiro");
    scanf("%d", &x);
    printf("o valor do numero informado em Hexadecimal e ; %x \n", x);
    printf("o valor do numero informado em octal e : %o \n", x );
    return 0;
}