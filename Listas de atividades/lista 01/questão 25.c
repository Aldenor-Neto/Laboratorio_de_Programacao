#include <stdio.h>

int main(){
int x, h, m, s ;

puts("informe a quantidade de segundos que deseja obter o tempo");
scanf("%d", &x );
fflush(stdin);

h = x/3600 ;
x = x % 3600 ;
m = x / 60 ;
x = x % 60 ;
s = x ;

printf("o total de segunbdos informado em horas e  igual a %d", h );
printf(":%d", m );
printf(":%d", s );

return 0;
}