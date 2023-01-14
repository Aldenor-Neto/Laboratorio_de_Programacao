//5. Escreva um programa que encontre o tamanho de uma string fornecida. Utilize ponteiros.

#include <stdio.h>
#define tam 50

void contagem(char *p);
int main () {

char str[tam];

puts("informe a string");
fgets(str, 80, stdin);
fflush(stdin);

contagem(str);

    return 0;
}

void contagem(char *p){
    int i, cont ;
    cont = 0 ;

while(*p != '\0'){
cont++ ;
p++ ;
}

printf("a string informada tem %d caracteres!", cont );
}