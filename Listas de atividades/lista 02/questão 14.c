#include <stdio.h>

int main (){
int a, b, x, i, cont ;

puts("informe o primeiro valor!");
scanf("%d", &a );
fflush(stdin);
printf("o valor de A e %d \n", a );

puts("informe o segundo valor!");
scanf("%d", &b );
fflush(stdin);
printf("o valor de B e %d \n", b );

if (a>b){
    x = a ;
    a = b ;
    b = x ;
}

cont = 0 ;
for (i=a ; i<=b ; i++){
    if (i%3 == 0){
        cont++ ;
    }
}

printf("A quantidade de numeros que sao divisiveis por 3 na faixa informada e %d", cont );
    return 0;
}