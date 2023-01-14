#include <stdio.h>

int main () {

int x, y; 

x=0 ;
y=0;

do {
puts("informe um valor");
scanf("%d", &x );
fflush(stdin);

if (x>y){
    printf("o maior valor e %d \n", x );
}
else {
    printf("o maior valor e %d \n", y );
}
y = x ;

}while(x>0);

    return 0;
}