#include <stdio.h>

int  main (){
float valor ;
puts("informe o valor da conta ");
scanf("%f", &valor);
printf("o valor total a pagar e %.2f", valor + (valor/100)*10);
return 0;
    }