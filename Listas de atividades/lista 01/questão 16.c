#include <stdio.h>

int main(){

    int h ;
    float v, d, sb, sl ;

    puts("informe o valor da hora trabalhada");
    scanf("%f", &v);
    fflush(stdin);

    puts("informe a quantidade de horas trabalhadas");
    scanf("%d", &h);
    fflush(stdin);

puts("informe o percentual de desconto do INSS");
scanf("%f", &d);
fflush(stdin);

sb = h * v ;
sl = sb - ((sb/100)*d) ;

printf("O salario bruto e de %.2f", sb );
printf("O salario liquido e de %.2f", sl );

return 0;
}