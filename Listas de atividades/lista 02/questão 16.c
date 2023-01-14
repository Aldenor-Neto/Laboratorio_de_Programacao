#include <stdio.h>

int main (){

int x, y, i ;

    x = 0 ;
    y = 0 ;

for (i=0 ; i<=200 ; i++){
    if (i%3 == 0 ){
        x+=i ;
    }

    if (i>=100 && i%5==0){
        y+=i ;
    }
}

printf("O somatorios dos numeros divisiveis por 3 na faixa de 0 a 100 e : %d \n", x );
printf("O somatorio dos numeros divisiveis por 5 na faixa de 100 a 200 e : %d \n", y );

    return 0;
}