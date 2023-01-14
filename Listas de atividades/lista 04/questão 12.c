// 12. Reimplemente a quest˜ao 11 considerando que o vetor Y ´e dado em fun¸c˜ao de X da seguinte forma:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10
#define max 7

void gerar_vetor(int *, int, int);
void imprimir_vetor(int *, int);
void imprimir_ocorrencia(int *, int *, int, int);
void funcao_y(int *, int *, int);
int main () {

int x[tam] ;
int y[tam] ;

srand(time(NULL));

gerar_vetor(x, tam, max);

puts("o vetor de X e");
imprimir_vetor(x, tam);

funcao_y(x, y, tam);

puts("o vetor de Y e ");
imprimir_vetor(y, tam);

puts("matriz de ocorrencia dos vetores!");
imprimir_ocorrencia(x, y, tam, max);

    return 0;
}

void gerar_vetor(int *pv, int qt, int mx){
    for (int i=0 ; i<qt ; i++){
        *(pv+i) = rand()%mx ;
    }
}

void imprimir_vetor(int *pv, int qt){
    for (int i=0 ; i<qt ; i++){
        printf("%d, ", *(pv+i) );
    }
    printf("\n");
}

void imprimir_ocorrencia(int *px, int *py, int qt, int mx){
    int mat_oc[mx*mx];

    for (int i=0 ; i<(mx*mx) ; i++){
        *(mat_oc+i) = 0 ;
    }

    for (int i=0 ; i<qt ; i++){
        int w = ( *(px+i) * mx ) + *(py+i) ;
        *(mat_oc+w) = *(mat_oc+w) + 1 ;
    }

    for (int i=0 ; i<(mx*mx) ; i++){
        printf("%3d ", *(mat_oc+i) );
        if ((i+1)%mx == 0){
            printf("\n");
        }

    }
}

void funcao_y(int *px, int *py, int qt){
    for (int i=0 ; i<qt ; i++){
        do {
            int r = rand()%11 ;
            if (r<=3){
                *(py+i) = *(px+i) ;
            }
            if (r<=5){
                *(py+i) = *(px+i) -1 ;
            }
            if (r<=7){
                *(py+i) = *(px+i) + 1 ;
            }
            if (r<=9){
                *(py+i) = *(px+i) - 2 ;
            }
            if (r==10){
                *(py+i) = *(px+i) + 2 ;
            }
        }while(*(py+i)<0);
    }
}