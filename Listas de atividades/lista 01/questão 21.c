#include <stdio.h>

int main(){

int a, b ;

puts("informe o primeiro numero inteiro!");
scanf("%d", &a );
fflush(stdin);

puts("informe o segundo numero inteiro!");
scanf("%d", &b );
fflush(stdin);

a % b ?printf("nao e multiplo"):printf("e multiplo");

    return 0;
}