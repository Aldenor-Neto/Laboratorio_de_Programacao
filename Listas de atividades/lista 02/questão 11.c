#include <stdio.h>

int main () {

int a, b, x, i ;

puts("informe o primeiro valor!");
scanf("%d", &a);
fflush(stdin);

puts("informe o segundo valor!");
scanf("%d", &b );
fflush(stdin);

if (a>b){
    x = a ;
    a = b ; 
    b = x ;
}

for (i=a ; i<=b ; i++){

    if (i%4 == 0){
        printf("o numero %d e multiplo de 4 e seu quadrado e : %d \n", i, i*i );
    }

}

    return 0;
}