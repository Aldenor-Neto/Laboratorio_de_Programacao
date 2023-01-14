/* 3. Escreva um programa que solicite iterativamente um n´umero do usu´ario e imprima sempre o menor
valor fornecido. Crie um crit´erio para finaliza¸c˜ao do programa. Utilize ponteiros.*/

#include <stdio.h>

void menor(int *px, int *py);
int main () {

int x, y ;

x = 0 ;
y = 0 ;
do {

    puts("informe um valor");
    puts("para finalizar digite um numero negativo!");
    scanf("%d", &x );
    fflush(stdin);

    menor(&x, &y);

    y = x ;

}while(x>=0);

    return 0 ;
}

void menor(int *px, int *py){
    if (*px < *py){
        printf("menor valor = %d \n", *px );
    }
    else {
        printf("menor valor = %d \n", *py );
    }
}