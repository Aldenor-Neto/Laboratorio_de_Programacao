#include <stdio.h>
#include <string.h>

int main () {
char s[50] ;
int i ;

puts("informe a string!");
fgets(s, 50, stdin);
fflush(stdin);

for (i=0 ; ; i++){
//Dentro do printf do IF tem um i-1 para que não seja contado o \n e o \0 que fazem parte da string
    if (s[i]=='\0') {
        printf("a string informada tem %d caracteres", i-1 );
        break;
    }
}
    return 0 ;
}