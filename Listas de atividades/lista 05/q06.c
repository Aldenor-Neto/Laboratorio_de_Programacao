// 6. Escreva um programa em C que apresente a m´ edia, a mediana e a moda de um vetor de inteiros gerados aleatoriamente em tempo de execu¸ c˜ ao.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define mx 7

void ordenacao(int *, int);
void imprimir_vetor(int *, int);
void media(int *, int, float *);
void mediana(int *, int, float *);
void moda(int *, int, int, int *);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("erro! \n informe os argumentos necessarios. \n \t \t tam vet!");
        exit(1);
    }

    int x = atoi(argv[1]);
    int *pv = malloc(x * sizeof(int));
    if (!(pv = malloc(x * sizeof(int))))
    {
        printf("erro de alocacao de memoria!");
        exit(2);
    }

    srand(time(NULL));

    for (int i = 0; i < x; i++)
    {
        *(pv + i) = rand() % mx;
    }

    puts("vetor gerado e ordenado");
    ordenacao(pv, x);
    imprimir_vetor(pv, x);

    float md;
    media(pv, x, &md);
    printf("media = %.2f \n", md);

    float mn;
    mediana(pv, x, &mn);
    printf("mediana = %.2f \n", mn);

    int *mda = NULL;
    moda(pv, x, mx, mda);

    return 0;
}

void ordenacao(int *p, int x)
{
    for (int i = 0; i < (x - 2); i++)
    {
        for (int j = 0; j < (x - 1); j++)
        {
            int aux;
            if (*(p + j) > *(p + (j + 1)))
            {
                aux = *(p + j);
                *(p + j) = *(p + (j + 1));
                *(p + (j + 1)) = aux;
            }
        }
    }
}

void imprimir_vetor(int *p, int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

void media(int *p, int qt, float *r)
{
    int soma = 0;
    for (int i = 0; i < qt; i++)
    {
        soma = soma + *(p + i);
    }
    *r = (float)soma / qt;
}

void mediana(int *p, int qt, float *r)
{
    if (qt % 2 == 0)
    {
        int x = qt / 2;
        int y = *(p + x) + *(p + (x - 1));
        *r = (float)y / 2;
    }
    else
    {
        int x = (qt / 2);
        *r = *(p + x);
    }
}

void moda(int *p, int qt, int max, int *r)
{
    int *pm = calloc(max, sizeof(int));
    if (!(pm = calloc(max, sizeof(int))))
    {
        printf(("erro de alocacão de memoria!"));
        exit(1);
    }

    for (int i = 0; i < qt; i++)
    {
        *(pm + *(p + i)) = *(pm + *(p + i)) + 1;
    }

    int maior = *pm;
    for (int i = 1; i < max; i++)
    {
        if (maior < *(pm + i))
        {
            maior = *(pm + i);
        }
    }

    int cont = 0;
    for (int i = 0; i < max; i++)
    {
        if (*(pm + i) == maior)
        {
            cont++;
        }
    }

    r = malloc(sizeof(int));
    if (!(r = malloc(sizeof(int))))
    {
        printf("erro de alocacao de memoria!");
        exit(2);
    }

    int k = 0;
    for (int i = 0; i < max; i++)
    {
        if (*(pm + i) == maior)
        {
            *(r + k) = i;
            k++;
        }
    }

    puts("moda");
    for (int i = 0; i < cont; i++)
    {
        printf("%d ", *(r + i));
    }
}