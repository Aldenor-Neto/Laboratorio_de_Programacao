#include <stdio.h>

int main (){
float i ;

for (i = 10 ; i <= 100 ; ){
    printf("a temperatura em graus Celsius igual a %.1f e referente a %.1f em Fahrenheit \n", i, (i*1.8)+32);
    i+=10 ;
}

    return 0;
}