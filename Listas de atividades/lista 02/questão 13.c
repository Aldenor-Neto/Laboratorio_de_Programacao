#include <stdio.h>

int main (){
int a, b, x, i, cont  ;

puts("informe o primeiro valor!");
scanf("%d", &a );
fflush(stdin);
printf("o O valor de A e %d\n", a );

puts("informe o segundo valor!");
scanf("%d", &b );
fflush(stdin);
printf("O valor de B e %d \n", b );

if (a>b){
    x = a ;
    a = b ;
    b = x ;
}

cont = 0 ;
for (i=a ; i<=b ; i++){
if (i%2 == 0){
    cont += i ;
}
}

printf("O somatorio dos numeros pares na faixa informada e de %d \n", cont );

    return 0;
}