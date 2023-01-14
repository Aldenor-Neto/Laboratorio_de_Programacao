#include <stdio.h>

int main () {

int maior, menor, i, cont, prod ;
cont = 0 ;

do {
        puts("informe um numero inteiro!");
    puts("caso queira finalizar digite um inteiro, negativo e par!");
scanf("%d", &i );
fflush(stdin);

if (i<0 && i%2==0){
    break;
}

cont==0 ?(maior=i) :(maior=maior);
cont==0 ?(menor=i) : (menor=menor);
cont++ ;
menor>i ?(menor=i) : (menor=menor);
maior<i ?(maior=i) : (maior=maior);
}while(i>0 || i%2!=0 );

printf("o maior numero informado foi %d \n", maior );
printf("o menor numero informado foi %d \n", menor );

prod = menor * maior ;
printf("o produto do menor pelo maior e %d ", prod );
    return 0;
}   