#include <stdio.h>

int main(){

    float c;

    puts("informe a temperatura em!");
    scanf("%f", &c );

    printf("A temperatura em graus Fahrenheit e %.1f", (9 * c + 160) / 5 );

    return 0;
}