#include <stdio.h>

int main(){
int d ;
    float v;

puts("informe a quantidade de dias trabalhados.");
scanf("%d", &d );

    v = 50.25 * d;

if (d<=10) {
    printf("o valor bruto e %.2f \n ", v );
    printf("o seu desconto e de %.2f \n ", v*0.1 );
    printf("o valor liquido a receber e %.2f", v*0.9);
}
if (d>10 && d<=20 ) {
    v = v * 1.2 ;
    printf("o valor bruto e %.2f \n ", v );
    printf("o seu desconto e de %.2f \n ", v*0.1 );
    printf("o valor liquido a receber e %.2f", v*0.9);
}
if (d>20) {
    v = v * 1.3 ;
    printf("o valor bruto e %.2f \n ", v );
    printf("o seu desconto e de %.2f \n ", v*0.1 );
    printf("o valor liquido a receber e %.2f", v*0.9);
}
    return  0;
}