#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 3
#define max 10 

int main () {

int mat[tam][tam];
int i, j, num, cont ;

srand(time(NULL));

for (i=0 ; i<tam ; i++){
    for (j=0 ; j<tam ; j++){
        mat[i][j] = rand()%max ;
    }
}

puts("informe um numero inteiro para verificacao!");
scanf("%d", &num );
fflush(stdin);

puts("A matriz gerada foi :");
for (i=0 ; i<tam ; i++){
    for (j=0 ; j<tam ; j++){
        printf("%3d, ", mat[i][j] );
    }
    printf("\n");
}

cont = 0 ;
for (i=0 ; i<tam ; i++){
    for (j=0 ; j<tam ; j++){
        if (num == mat[i][j]){
            cont +=1 ;
        }
    }
}

printf("o numero %d aparece %d vezes na matriz gerada!", num, cont );
    return 0;
}