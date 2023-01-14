// 2. Escreva um programa que troque o valor de dois n´umeros utilizando ponteiros.

#include <stdio.h>
void troca(int *p1, int *p2);
int main () {

int x, y ;

puts("informe o primeiro valor!");
scanf("%d", &x );
fflush(stdin);

printf("voce digitou %d para X!", x );

puts("informe o segundo valor!");
scanf("%d", &y );
fflush(stdin);

printf("voce digitou %d para Y!", y );

troca(&x, &y);

puts("valores trocados");
printf("x = %d \n", x);
printf("y = %d \n", y );

    return 0;
}

void troca(int *p1, int *p2){
    int z ;

    z = *p1 ;
    *p1 = *p2 ;
    *p2 = z ;
}