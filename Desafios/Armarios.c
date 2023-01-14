#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main () {

unsigned char armario ;
int posicao, escolha, aux ;

armario = 0 ;

srand(time(NULL));

do  {

    if (armario ==255) {
    printf("todos os armarios estão oculpados!");
}

printf("O que deseja! Digite: \n");
printf("1 ocupar armario; \n 2 liberar armario; \n 3 sair \n");
scanf("%d", &escolha );
fflush(stdin);

switch (escolha){
case 1 :
do {
    posicao = pow(2, rand()%8) ;

    aux = armario|posicao ;
}while(armario == aux);
armario = aux ;
break ;

case 2 :
    puts("qual armario deseja desocupar?");
    scanf("%d", &posicao );
    fflush(stdin);

    posicao = pow(2, posicao);
    armario = armario&~posicao;
break;

case 3 :
puts("encerrando!");
break;

default  :
printf("informe uma posicao valida!");
break;
}

printf("os armarios que estao ocupados sao %d \n", armario );

}while(escolha!=3);

    return 0;
}