#include <stdio.h>

int main (){

    int a, b ;

    puts("informe o primeiro numero inteiro");
    scanf("%d", &a);
    fflush(stdin);
    puts("informe o segundo numero inteiro");
    scanf("%d", &b);
    fflush(stdin);

    printf("A soma dos numeros informados e %d \n", a+b );
    printf("O produto dos numeros informados e %d \n", a*b );
    printf("A diferenca dos numeros informados e %d \n", a-b );
    printf("A divisao dos numeros informados gera um coeficiente %d", a/b );
    printf("e um resto igual a %d \n", a % b );

    return 0;
}