#include <stdio.h>
#include <string.h>

int main () {

char s1[100] ;
char s2[100] ;
char copia[100] ;
int i, j ;
puts("informe a primeira string!");

scanf("%99[^\n]", s1 );
fflush(stdin);

puts("informe a segunda string!");
scanf("%99[^\n]", s2 );
fflush(stdin);

printf("string 1 %s \n", s1 );
printf("string 2 %s \n", s2 );
strcpy(copia, s1);
puts("comcatenacao das strings ultilizando a funcao strcat");
strcat(copia, s2) ;
printf("%s", copia );
printf("\n");

puts("concatenacao na string sem a funcao!");
j= 0 ;
    for (i=strlen(s1) ; i<(strlen(s1)+strlen(s2)) ; i++){
        s1[i] = s2[j] ;
        j++ ;
    }

printf("%s", s1 );
    return 0;
}