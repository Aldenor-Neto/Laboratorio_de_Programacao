// 8. Escreva um programa que busque um caracter fornecido em uma string utilizando ponteiros.

#include <stdio.h>
#define tam 50

void verificacao(char *, char );

int main () {

char vet[tam] ;
char x ;

puts("informe a string!");
fgets(vet, tam, stdin);
fflush(stdin);

puts("informe o caractere de verificacao!");
scanf("%c", &x );
fflush(stdin);

verificacao(vet, x);

    return 0;
}

void verificacao(char *ps, char x){
int i=0 ;
while(*(ps+i)!='\0'){
    if (*(ps+i)== x){
        printf("o caractere %c existe na posicao %d \n", x, i+1 );
    }
    i++ ;
}
}