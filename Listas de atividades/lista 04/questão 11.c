/* 11. Escreva um programa que gere dois vetores (X e Y ) com n´umeros pseudoaleat´orios no intervalo
[0,N − 1]. Crie uma matriz M com dimens˜oes NxN que armazene as coocorrˆencias dos elementos
de X e Y */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10
#define max 7

void gerar_vetor(int *, int, int);
void imprimir_vetor(int *, int);
void imprimir_ocorrencia(int *, int *, int, int);
int main()
{

    int x[tam];
    int y[tam];

    srand(time(NULL));

    gerar_vetor(x, tam, max);

    puts("o vetor de X e");
    imprimir_vetor(x, tam);

    gerar_vetor(y, tam, max);
    puts("o vetor de Y e ");
    imprimir_vetor(y, tam);

    puts("matriz de ocorrencia dos vetores!");
    imprimir_ocorrencia(x, y, tam, max);

    return 0;
}

void gerar_vetor(int *pv, int qt, int mx)
{
    for (int i = 0; i < qt; i++)
    {
        *(pv + i) = rand() % mx;
    }
}

void imprimir_vetor(int *pv, int qt)
{
    for (int i = 0; i < qt; i++)
    {
        printf("%d, ", *(pv + i));
    }
    printf("\n");
}

void imprimir_ocorrencia(int *px, int *py, int qt, int mx)
{
    int mat_oc[mx * mx];

    for (int i = 0; i < (mx * mx); i++)
    {
        *(mat_oc + i) = 0;
    }

    for (int i = 0; i < qt; i++)
    {
        int w = (*(px + i) * mx) + *(py + i);
        *(mat_oc + w) = *(mat_oc + w) + 1;
    }

    for (int i = 0; i < (mx * mx); i++)
    {
        printf("%3d ", *(mat_oc + i));
        if ((i + 1) % mx == 0)
        {
            printf("\n");
        }
    }
}
