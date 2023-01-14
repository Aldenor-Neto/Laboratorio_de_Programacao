#include <stdio.h>

int main (){

int x, y, w, i, cont, z ;
float med ;

puts("informe o primeiro valor");
scanf("%d", &x );
fflush(stdin);

puts("informe o segundo valor");
scanf("%d", &y );
fflush(stdin);

if (x>y){
    w = x ;
    x = y ;
y = w ;
}   

cont = 0 ;
for (i=x ; i<=y ; i++){
cont +=i ;
}

z = y-(x-1) ;
med = (float)cont/z ;

printf("A media aritimetica dos valores de %d ate %d e igual a  %.2f \n", x, y, med );

    return 0;
}