#include <stdio.h>

int main(){

    int x ;

    puts("informe um numero inteiro!");
    scanf("%d", &x );
    fflush(stdin);

    x % 2 ?printf("impar"):printf("par");

    return 0;
}