// 9. Implemente o m´etodo de ordena¸c˜ao bolha utilizando ponteiros.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 15

int gerar_vetor(int *, int);
void imprimir_vetor(int *, int);
int ord_bolha(int *, int);
int main () {

int vet[tam];

gerar_vetor(vet, tam);

puts("numeros do vetor gerado!");
imprimir_vetor(vet, tam);
printf("\n");

puts("vetor ordenado pelo metodo bolha!");
ord_bolha(vet, tam);
imprimir_vetor(vet, tam);

    return 0;
}

int gerar_vetor(int *pv, int x){

    srand(time(NULL));

for (int i=0 ; i<x ; i++){
    *(pv+i) = rand()%50 ;
}
}

void imprimir_vetor(int *pv, int x){
    for (int i=0 ; i<x ; i++){
        printf("%d, ", *(pv+i));
    }
}

int ord_bolha(int *pv, int x){
    int aux ;
    for (int i=0; i<x ; i++){
        for (int j=0 ; j<x-1 ; j++){
            if (*(pv+j) > *(pv+(j+1))){
aux = *(pv+j);
*(pv+j) = *(pv+(j+1)) ;
*(pv+(j+1)) = aux ;
            }
        }
    }
}