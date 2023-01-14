#include <stdio.h>

int main (){

int x, y ;

puts("informe o primeiro valor!");
scanf("%d", &x );
fflush(stdin);
y = 0 ;

while (y == 0){

    puts("informe o valor do divisor!");
    scanf("%d", &y );
    fflush(stdin);

    if (y == 0){
        puts("o valor informado e nulo!");
    }
}

printf("o resultado da divisao e : %.2f", (float)x/y );
return 0;
}