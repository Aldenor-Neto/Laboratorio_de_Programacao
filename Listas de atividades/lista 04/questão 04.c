/*4. Escreva um programa que leia um vetor do usu´ario e imprima seus valores e seus endere¸cos. Teste
o vetor com tipos de dados diferentes, analise os endere¸cos. O que vocˆe observou? */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 15

void imprime(int *vet, int num);
int main () {

int vet[tam] ;
int i ;

srand(time(NULL));

for (i=0 ; i<tam ; i++){
    vet[i] = rand()%30 ;
}

imprime(vet, tam);

    return 0;
}

void imprime(int *vet, int num){
int i ;
for (i=0 ; i<num ; i++){
    printf("endereco = %p   valor = %d \n", &vet[i], vet[i] );
}
}