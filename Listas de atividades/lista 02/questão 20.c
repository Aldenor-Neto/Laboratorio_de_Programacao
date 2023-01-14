#include <stdio.h>

int main (){

int i, x, fatorial  ;

for (i=1 ; i<=10 ; i++){

    if (i%2 == 1){
        x = i ;
        for (fatorial = 1 ; x>1 ; x=x-1){
            fatorial = fatorial * x ;
        }
        printf("o fatorial de %d e igual a %d \n ", i, fatorial );
    }
}

    return 0;
}