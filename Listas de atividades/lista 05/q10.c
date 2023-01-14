/*10. Escreva um programa que gere dois vetores (X e Y ) com n´umeros pseudoaleat´orios no intervalo
[0,N − 1]. Crie uma matriz M com dimens˜oes NxN que armazene as coocorrˆencias dos elementos
de X e Y da seguinte forma:
Por exemplo, para N = 7:
X = [4, 6, 2, 3, 2, 3, 0, 2, 5, 5, 2, 6, 0, 5]
Y = [3, 6, 2, 1, 0, 2, 1, 3, 5, 5, 3, 4, 1, 5]
Portanto,
M =
0 0 1 0 0 0 0
2 0 0 1 0 0 0
0 0 1 1 0 0 0
0 0 2 0 1 0 1
0 0 0 0 0 0 0
0 0 0 0 0 3 0
0 0 0 0 0 0 1*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define mx 3

void gerar_vetor(int *, int, int);
void imprimir_vetor(int *, int);
void ocor_mat(int *, int *, int *, int);
void imprimir_mat(int *, int);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("erro de argumentacao! \n informe tam vet");
        exit(1);
    }

    int tam = atoi(argv[1]);
    int *px = malloc(tam * sizeof(int));

    if (!(px = malloc(tam * sizeof(int))))
    {
        printf("erro de alocacao de memoria!");
        exit(2);
    }

    int *py = malloc(tam * sizeof(int));

    if (!(py = malloc(tam * sizeof(int))))
    {
        printf("erro de alocacao de memoria!");
        exit(3);
    }

    int *mat_ocor = calloc((mx * mx), sizeof(int));

    if (!(mat_ocor = calloc((mx * mx), sizeof(int))))
    {
        printf("erro de alocacao de memoria!");
        exit(4);
    }

    srand(time(NULL));

    puts("vetor de X");
    gerar_vetor(px, tam, mx);
    imprimir_vetor(px, tam);
printf("\n");

    puts("vetor de Y");
    gerar_vetor(py, tam, mx);
    imprimir_vetor(py, tam);
printf("\n");

    ocor_mat(mat_ocor, px, py, tam);

    puts("matriz de ocorrencias!");
imprimir_mat(mat_ocor, mx);

    return 0;
}

void gerar_vetor(int *p, int tam, int max)
{
    for (int i = 0; i < tam; i++)
    {
        *(p + i) = rand() % max;
    }
}

void imprimir_vetor(int *p, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", *(p + i));
    }
}

void ocor_mat(int *matriz, int *lin, int *col, int tam)
{
    int k ;
    for (int i = 0; i < tam; i++)
    {
        k = (*(lin+i) * mx) + *(col + i) ;
        *(matriz + k)+= 1 ;
    }
}

void imprimir_mat(int *matriz, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("%d ", *(matriz + ((tam * i) + j)));
        }
        printf("\n");
    }
}
