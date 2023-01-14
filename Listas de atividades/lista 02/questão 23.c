#include <stdio.h>

int main () {

int i ;

puts("se o ingremento tiver antes da variavel ele acontece primeiro!");

for (i=10 ; i>=0 ; ) {
printf("%d \n", --i );
}
puts("Note que no for acima mesmo com a variavel inicializando em 10 ele comeca a imprimir apartir do 9 pois o ingremento acontece antes de chegar a variavel e mesmo a condicao de parada ser 0 ele imprime o -1 ");

puts("ingremento posterior!");

for (i=10 ; i>=0 ;){
    printf("%d \n",i-- );
}

puts("Ja no posterior ele imprime corretamente a ordem do for pois ele primeiro imprime depois acontece o ingremento de reducao!");
    return 0;
}