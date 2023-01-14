/*4. Escreva um programa que dado um vetor X de inteiros, realize a seguinte normaliza¸c˜ao dos dados
(min-max):
X0 =
X − min(X)
max(X) − min(X)
, (1)
onde min() e max() correspondem ao menor e maior do vetor, respectivamente.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define mx 10

void gerar_vetor(int *, int, int);
void imprimir_vetor(int *, int);
void imprimir_float(float *, int);
void menor(int *, int, int *);
void maior(int *, int, int *);
void normalizacao(int *, float *, int, int, int);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("erro! \n informe os argumentos necessarios. \n \t \t tam vet");
        exit(1);
    }

    int x = atoi(argv[1]);
    int *pv = malloc(x * sizeof(int));
    if (!(pv = malloc(x * sizeof(int))))
    {
        printf("erro de alocacao de memoria!");
        exit(2);
    }

    float *pn = malloc(x * sizeof(float));
    if (!(pn = malloc(x * sizeof(float))))
    {
        printf("erro de alocacao de memoria!");
        exit(3);
    }

    srand(time(NULL));

    gerar_vetor(pv, x, mx);
    imprimir_vetor(pv, x);

    int min, max;

    menor(pv, x, &min);
    maior(pv, x, &max);
    printf("min = %d \t max = %d \n", min, max);

    normalizacao(pv, pn, max, min, x);

    puts("vetor de normalizacao!");
    imprimir_float(pn, x);

    return 0;
}

void gerar_vetor(int *p, int x, int max)
{
    for (int i = 0; i < x; i++)
    {
        *(p + i) = rand() % max;
    }
    printf("\n");
}

void imprimir_vetor(int *p, int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

void imprimir_float(float *p, int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%.2f ", *(p + i));
    }
    printf("\n");
}

void menor(int *p, int qt, int *men)
{
    *men = *p;
    for (int i = 1; i < qt; i++)
    {
        if (*men > *(p + i))
        {
            *men = *(p + i);
        }
    }
}

void maior(int *p, int qt, int *mai)
{
    *mai = *p;
    for (int i = 1; i < qt; i++)
    {
        if (*mai < *(p + i))
        {
            *mai = *(p + i);
        }
    }
}

void normalizacao(int *p, float *px, int a, int b, int qt)
{
    int x;
    int y = a - b;

    for (int i = 0; i < qt; i++)
    {
        x = *(p + i) - b;
        *(px + i) = (float)x / y;
    }
}