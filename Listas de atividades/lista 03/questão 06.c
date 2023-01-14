#include <stdio.h>
#include <string.h>

int main () {

char string[20] ;
int i ;

puts("informe uma string!");
fgets(string, 20, stdin);
fflush(stdin);

printf("A string informada e : %s \n", string );
printf("o inverso da string e : ");
for (i=strlen(string) ; i>=0 ; i-- ){
    printf("%c", string[i] );
}
    return 0;
}