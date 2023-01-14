#include <stdio.h>

int main () {

int i ;

puts("tabela de conversao! ");
puts("decimal - octal - hexadecimal ");

for (i=1 ; i<=256 ; i++){
    printf("%d - %o - %x \n", i, i, i );
}
    return 0;
}