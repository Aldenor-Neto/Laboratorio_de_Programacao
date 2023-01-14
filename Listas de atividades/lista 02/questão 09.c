#include <stdio.h>

int main (){

int n, i, x, y ;

x = 1 ;
y = 1 ;
printf("a serie de fibonacci ate 20 termo e : %d, %d, ", x, y );
for (i = 3 ; i<= 20 ; i++){

    n = x + y ;
    printf("%d, ", n );
    x = y ;
    y = n ;
}

    return 0;
}