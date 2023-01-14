#include <stdio.h>

int main () {

int num, i, soma ;

puts("informe um numero");
scanf("%d", &num );
fflush(stdin);

soma = 0 ;
for (i=1 ; i<=num ; i++){
if (num%i == 0){
    soma = soma + i ;
}
}

if (soma == num*2){
    printf("o numero informado e perfeito");
}
else {
    printf("o numero informado nao e perfeito");
}


    return 0;
}
