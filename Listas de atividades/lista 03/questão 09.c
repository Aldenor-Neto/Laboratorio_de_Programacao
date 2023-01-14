#include <stdio.h>

int main () {

int mat[3][3] ;
int i, j ;

puts("informe os valores da matriz!");

for (i=0 ; i<3 ; i++){
    for (j=0 ; j<3 ; j++){
        printf("informe o valor da linha %d e coluna %d ", i, j );
        scanf("%d", &mat[i][j]);
        fflush(stdin);
    }
}
printf("os elementos da diagonal principal sao : ");
for (i=0 ; i<3 ; i++) {
    printf("%d, ", mat[i][i] );
}
    return 0;
}