// 3. Modifique a quest˜ ao anterior criando uma fun¸ c˜ ao que armazena em um vetor os endere¸ cos do menor e do maior elemento do vetor.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define mx 30

void men_mai(int *, int **, int);

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        printf("erro! \n informe os argumentos necessarios. \n \t \t tamanho vetor!");
        exit(1);
    }

    int x = atoi(argv[1]);
    int *pv = malloc(x * sizeof(int));

    if (!pv)
    {
        printf("erro de alocacao de memoria!");
        exit(2);
    }

    srand(time(NULL));

    for (int i = 0; i < x; i++)
    {
        *(pv + i) = rand() % mx;
        printf("[%p] \t %d \n", pv + i, *(pv + i));
    }

    int **pend = malloc(2 * sizeof(int *));
    if (!pend)
    {
        printf("erro de alocacao de memoria");
        exit(2);
    }

men_mai(pv, pend, x);

    puts("menor valor do vetor!");
    printf("[%p] \t %d \n", *pend, **pend);

    puts("maior valor do vetor!");
    printf("[%p] \t %d \n", *(pend + 1), **(pend + 1));

    return 0;
}

void men_mai(int *p, int **pp, int k)
{
    *pp = p;
    for (int i = 0; i < k; i++)
    {
        if (*(*pp) > *(p + i))
        {
            *pp = (p + i) ;
        }
    }

    *(pp + 1) = p;
    for (int i = 0; i < k; i++)
    {
        if (*(*pp) < *(p + i))
        {
            *(pp + 1) = (p + i);
        }
    }
}