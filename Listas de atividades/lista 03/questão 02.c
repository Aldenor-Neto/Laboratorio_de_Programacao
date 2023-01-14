#include <stdio.h>
#include <string.h>

int main () {

char s[20] ;
char c ;
int i, ok ;
puts("informe a string!");
fgets(s, 20, stdin);
fflush(stdin);

puts("informe um caractere para comparacao!");
scanf("%c", &c );
fflush(stdin);

printf("a string informada foi %s \n", s );
printf("o caractere de comparacao informado foi %c \n", c);
for (i=0 ; i<strlen(s) ; i++) {
    if (c == s[i]) {
        printf("existe um caractere %c na posicao %d \n", c, i );
    }
}

    return 0;
}