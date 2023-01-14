#include <stdio.h>

int main (){

int x, y, i ;

puts("informe o numero da tabuada que voce deseja!");
scanf("%d", &x );
fflush(stdin);

printf("informe qual a operacao que deseja! \n Digite: \n 1 para adicao; \n 2 para Subtracao ; \n 3 para multiplicacao ;\n 4 para Divisao.");
scanf("%d", &y );
fflush(stdin);

switch(y){
    case 1 :
printf("a tabuada de adicao de %d e : \n", x );
    for (i=1 ; i<=10 ; i++){
printf("%d + %d = %d \n", x, i, x+i );
    }
    break;
    case 2 :
    printf("A tabuada de subtracao de %d e : \n", x );
    for (i=(x+1) ; i<=(x+10) ; i++){
        printf("%d - %d = %d \n", i, x, i-x );
    }
    break;
    case 3 :
    printf("A tabuada de multiplicacao de %d e : \n", x );
    for (i=1 ; i<=10 ; i++){
        printf("%d x %d = %d \n", x, i, x*i );
    }
    break;
    case 4 :
    printf("A tabuada de divisao de %d e : \n", x );
    for (i=1 ; i<=10 ; i++){
        printf("%d / %d = %d \n", (x*i), x, (i*x)/x );
    }
    break;
}

    return 0;
}