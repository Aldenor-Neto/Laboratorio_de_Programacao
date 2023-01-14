#include <stdio.h>

int main(){

float raio ;

puts("informe o raio da circunferencia!");
scanf("%f", &raio );
fflush(stdin);

printf("o diametro da circunferencia e de %.4f \n", raio * 2 );
printf("o comprimento da circunferencia e de %.4f \n", (raio * 2) * 3,1459 );
printf("a area da circunferencia e de %.4f \n", (raio * raio) * 3,1459   );

return 0;
}