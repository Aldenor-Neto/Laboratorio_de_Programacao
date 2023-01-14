//6. Escreva um programa que copie uma string para outra usando ponteiros.

#include <stdio.h>
#define tam 50

char copiar(char *p1, char *p2);
int main () {

char str1[tam];
char str2[tam];
int i ;

puts("informe a string!");
fgets(str1, 80, stdin);
fflush(stdin);

puts("string informada!");
for (i=0 ; str1[i] != '\n' ; i++){
    printf("%c", str1[i] );
}
printf("\n");

copiar(str1, str2);

puts("strime copiada!");
for (i=0 ; str2[i] != '\n' ; i++){
    printf("%c", str2[i] );
}
return 0;
}

char copiar(char *p1, char *p2){
    while(*p1 != '\0'){
        *p2 = *p1 ;
        p1++;
        p2++ ;
    }

    return p2 ;
}