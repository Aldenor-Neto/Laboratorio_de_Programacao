#include <stdio.h>

int main(){

    float comp, alt, larg;

    puts("informe as medidas da caixa");
    puts("comprimento");
    scanf("%f", &comp);
    fflush(stdin);
    puts("largura");
    scanf("%f", &larg);
    fflush(stdin);
    puts("altura");
    scanf("%f", &alt);
    fflush(stdin);
    printf("o volume da caixa e %.2f", comp * larg * alt );
    return 0;
}