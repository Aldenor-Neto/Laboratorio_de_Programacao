#include <stdio.h>

int main () {

int num, i, prod ;

prod = 1 ;
for (i=0 ; i<5 ; i++){
    puts("informe um valor");
    scanf("%d", &num );
    fflush(stdin);
    prod *= num ;
}

printf("o resultado do produtorio e = %d", prod );

    return 0;
}