#include <stdio.h>

int main(){

float  valor, entrada ;
int parcela ;

puts("informe o valor do produto!");
scanf("%f", &valor );
fflush(stdin);

printf("o valor do produto e : R$ %.2f \n", valor);

parcela = (int)valor / 3 ;
valor *=100 ;
valor = (int)valor% 300 ;
valor /=100 ;
entrada = parcela + valor ;

printf("A entrada sera de R$ %.2f \n", (float)entrada );
printf("As 2 parcela serao de R$ %.2f \n",  (float)(float)parcela );

    return 0;
}