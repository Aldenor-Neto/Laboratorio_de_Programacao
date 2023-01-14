// 7. Escreva um programa que concatene duas strings utilizando ponteiros.

#include <stdio.h>
#define tam 80

void imprimir_vetor(char *);
void concatenacao(char *, char *);
int main () {

char vet1[tam] ;
char vet2[tam] ;

puts("informe a primeira string!");
fgets(vet1, tam, stdin);
fflush(stdin);

puts("informe a segunda string!");
fgets(vet2, tam, stdin);
fflush(stdin);

imprimir_vetor(vet1);
imprimir_vetor(vet2);

puts("string concatenada!");
concatenacao(vet1, vet2);
imprimir_vetor(vet1);
    return 0;
}

void imprimir_vetor(char *ps){
char *p = ps ;

while(*p!='\0'){
    printf("%c", *p );
    p++ ;
}
}

void concatenacao(char *ps, char *ps2){
    int i=0 ;
    int j=0 ;
    while(*(ps+i)!='\n'){
        i++ ;
    }
    while(*(ps2+j)!='\0'){
        *(ps+i) = *(ps2+j) ;
        i++ ;
        j++ ;
    }
}