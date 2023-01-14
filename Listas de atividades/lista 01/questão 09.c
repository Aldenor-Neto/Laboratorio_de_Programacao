#include <stdio.h>

int main(){

    int x;
    puts("informe um numero inteiro");
    scanf("%d", &x);
    printf("o antecessor do numero informado e %d \n", x-1 );
    printf("o numero informado e %d \n", x);
    printf("o sucessor do numero informado e %d \n", x+1 );
    return 0;
}