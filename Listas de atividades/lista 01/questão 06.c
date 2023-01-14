#include <stdio.h>

int main(){

    int sexo;
    float altura ;

    printf("informe seu sexo : \n digite 1 para masculino e 2 para feminino. \n");
    scanf("%d", &sexo);
    fflush(stdin);
    printf("informe sua altura \n");
    scanf("%f", &altura);
    fflush(stdin);

sexo == 1 ?printf("seu sexo e masculino e seu peso ideal e : %.2f", 72.7 * altura - 58 ):printf("seu sexo e feminino e seu peso ideal e : %.2f", 62.1 * altura - 44.7 );

return 0;
}