#include <stdio.h>

int main(){

    int x ;

    puts("informe um numero para obter seu valor absoluto!");
    scanf("%d", &x );
    fflush(stdin);

x<0 ? printf("o valor absoluto e : %d", ~x+1) :printf("o valor absoluto e : %d", x );
    return 0;
}