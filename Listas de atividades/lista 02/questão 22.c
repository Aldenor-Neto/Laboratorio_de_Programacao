#include <stdio.h>

int main() {

int x, cont, casa ;

puts("informe um numero inteiro!");
scanf("%d", &x );
fflush(stdin);

printf("o numero informado e %d \n", x );

cont = 0 ;
casa = 1 ;

while(x>0){
if (x%10 == 7){
    cont+=1 ;
    printf("a casa %d da direita para a esquerda tem um digito 7! \n", casa );
}
x = x/10 ;
casa+=1 ;
}
printf("o numero de digitos que contem o numero 7  no numero informado e %d", cont );

    return 0;
}