#include <stdio.h>

int main(){

int jose, pedro, contador, i ;
jose = 150 ;
pedro = 110 ;
contador = 0;

while (pedro<=jose){

    jose +=2 ;
    pedro +=3 ;
    contador +=1 ;
}

printf("Pedro sera mais alto que Jose em %d", contador );
printf("anos \n");
printf("a altura de pedro sera %d \n", pedro );
printf("a altura de jose sera %d \n", jose );
    return 0;
}