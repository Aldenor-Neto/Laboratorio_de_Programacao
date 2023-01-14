#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 50
#define tam 5

int main () {

int vet[tam] ;
int i, j, aux ;

srand(time(NULL));

for (i=0 ; i<tam ; i++) {
    vet[i] = rand()%max ;
}

for (i=0 ; i<tam ; i++){
    for (j=i+1 ; j<tam ; j++) {
        if (vet[i]>vet[j]) {
            aux = vet[i] ;
            vet[i] = vet[j] ;
            vet[j] = aux ;
        }
    }
}

puts("o vetor gerado e ordenado com o metodo de ordenacao por selecao e ;");
for (i=0 ; i<tam ; i++){
    printf("%d, ", vet[i] );
}
printf("\n");
puts("vetor ordenado pelo metodo bolha!");
for (i=0 ; i<tam-2 ; i++) {
    for (j=0 ; j<tam-1 ; j++){
        if (vet[j]>vet[j+1]) {
            aux  = vet[j] ;
            vet[j] = vet[j+1] ;
            vet[j+1] = aux ;
        }
    }
}

for (i=0 ; i<tam ; i++) {
    printf("%d, ", vet[i] );
}

    return 0;
}