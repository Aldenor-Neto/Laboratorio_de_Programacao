#include <stdio.h>

int main(){

    float r, d;

    printf("informe o valor atual do dolar! \n");
    scanf("%f", &d );
    fflush(stdin);
    printf("informe o valor em real que deseja converter! \n ");
    scanf("%f", &r );
    fflush(stdin);

    printf("o valor do dolar e %.2f \n ", d );
    printf("o valor do real e %.2f \n ", r );
    printf("o cambio de real para dolar do valor informado e de %.2f \n ", r/d);
    return 0;
}