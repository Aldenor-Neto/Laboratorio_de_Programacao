/*  10. Escreva um programa que gere um vetor X com n´umeros pseudoaleat´orios no intervalo [0,N − 1].
Crie um vetor F com N posi¸c˜oes e armazene em cada posi¸c˜ao de F a quantidade de ocorrˆencias
dos elementos de X. Exemplo:
Para N = 7, temos:
X = [4, 6, 2, 3, 2, 3, 0, 2, 5, 5, 2, 6, 0, 5]
Portanto,
F = [2, 0, 4, 2, 1, 3, 2]
Observe que as ocorrˆencias dos elementos de X s˜ao armazenadas em F nos ´ındices de mesmo valor. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10
#define max 5

void gerar_vetor(int *, int, int);
void imprimir_vetor(int *, int);
void num_ocorrencia(int *, int *, int);
int main () {

int vet[tam] ;
int vet_ocor[tam] ;

gerar_vetor(vet, tam, max);

puts("numeros do vetor gerado!");
imprimir_vetor(vet, tam);

num_ocorrencia(vet, vet_ocor, tam);

puts("numero de ocorrencia do vetor!");
imprimir_vetor(vet_ocor, max);

    return 0;
}

void gerar_vetor(int *pv, int qt, int mx){

    srand(time(NULL));
    for (int i=0 ; i<qt ; i++){
        *(pv+i) = rand()%mx ;
    }
}

void imprimir_vetor(int *pv, int x){
    for (int i=0 ; i<x ; i++){
        printf("%d, ", *(pv+i) );
    }
    printf("\n");
}

void num_ocorrencia(int *pv, int *po, int qt) {
for (int i=0 ; i<qt ; i++){
    *(po+i) = 0 ;
}

for (int i=0 ; i<qt ; i++){
    int x = *(pv+i) ;
    *(po+x) = *(po+x) + 1 ;
}
}
