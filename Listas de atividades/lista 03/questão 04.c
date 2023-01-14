#include <stdio.h>
#include <string.h>

int main () {

char s1[20] ;
char s2[20] ;
int ok, i, cont ;

puts ("informe a primeira string!");
fgets(s1, 20, stdin);
fflush(stdin);

puts("informe a segunda string!");
fgets(s2, 20, stdin);
fflush(stdin);

puts("ultilizando a funcao strcmp!");
ok = strcmp(s1, s2);
ok==0 ?(printf("sao iguais!")) : (printf("nao sao iguais!"));

printf("\n");
puts("sem o uso da funcao!");
cont = 0 ;
for (i=0 ; i<strlen(s1) ; i++) {
    if (s1[i] == s2[i] ){
        cont +=1 ;
    }
}
if (cont==strlen(s1)) {
    printf("sao iguais!");
}
else {
    printf("nao sao iguais!");
}

    return 0;
}