/* 1. Escreva um programa que adicione dois n´umeros usando ponteiros. Al´em do valor da soma, imprima
tamb´em o endere¸co de mem´oria onde o valor resultante dessa soma est´a armazenado.*/

#include <stdio.h>
void soma(int *p1, int *p2, int *ps);
int main () {

int x, y, s ;

puts("informe um valor !");
scanf("%d", &x);
fflush(stdin);

puts("informe o segundo valor!");
scanf("%d", &y );
fflush(stdin);

soma(&x, &y, &s);

printf("valor da soma %d \n", s );
printf("endereco da soma %d \n", &s );

    return 0;
}
void soma(int *p1, int *p2, int *ps){
    *ps = *p1 + *p2 ;
}