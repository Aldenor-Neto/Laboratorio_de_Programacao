#include <stdio.h>

int main(){
float x, y, i ;

x = 1 ;
y = 1 ;
for (i=2 ; i<=64 ; i++ ){
    x *=2 ;
    y +=x ;
    printf("%.0f\n", x );
}

printf("o somatorio dos graos de todas as casas do tabuleiro e %.0f ", y );

    return 0;
}