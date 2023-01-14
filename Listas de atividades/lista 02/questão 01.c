#include <stdio.h>

int main(){

int i ;

    while (i>=1){

puts("informe um numero de 1 a 7 referente ao dia da semana");
scanf("%d", &i );
fflush(stdin);

switch(i){
case 1 :
printf("domingo");
break;
case 2 :
printf("segunda");
break;
case 3 :
printf("terca");
break;
case 4 :
printf("quarta");
break;
case 5 :
printf("quinta");
break;
case 6 :
printf("sexta");
break;
case 7 :
printf("sabado");
break;
default :
printf("Numero invalido! informe um numero de 1 a 7 ou tecle 0 para finalizar");
break;
}
    }
    return 0;
}