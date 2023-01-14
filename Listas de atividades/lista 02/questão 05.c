#include <stdio.h>

int main (){

int maior = 0 ;
int menor = 0 ;
int aux ;
int cont = 0 ;

while (aux != 0) {
printf("informe um numero inteiro ou digite 0 para finalizar!");
scanf("%d", &aux );
fflush(stdin);

if (aux==0){
    break;
}

if (cont == 0){
    maior = aux ;
    menor = aux ;
    cont ++ ;
}

if (aux<menor){
    menor=aux;
}

if (aux>maior){
    maior = aux ;
}

}

printf("o menor valor informado foi : %d", menor );
printf("o maior valor informado foi : %d", maior );

return 0;
}