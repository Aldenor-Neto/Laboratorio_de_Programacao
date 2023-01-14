#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main () {

int i ;
float maior, menor, soma;
float vet[15] ;

srand(time(NULL));
for (i=0 ; i<15 ; i++) {
    vet[i] = rand()%100 ;
    vet[i]/=10 ;
}

for (i=0 ; i<15 ; i++) {
    printf("%.2f \n", vet[i]);
}

menor = vet[0] ;
maior = vet[0] ;

for (i=1 ; i<15 ; i++) {
    menor>vet[i] ?(menor=vet[i]) : (menor = menor) ;
    maior<vet[i] ?(maior = vet[i]) : (maior = maior) ;
}

printf("o menor e %.2f \n", menor );
printf("o maior e %.2f \n", maior );

soma = menor + maior ;
printf("A soma do maior valor do vetor pelo menor e  %.2f", soma );
    return 0;
}