/*2. Escreva um programa em C que informe o endere¸ co do menor elemento de um vetor de inteiros gerado. A quantidade de elementos desse array deve ser fornecido por linha de comando.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define mx 30

int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        printf("erro! \n informe os argumentos necessarios. \n \t \t tamanho vetor!");
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
        printf("[%p] \t %d \n", pv + i, *(pv + i));
    }

    int **pend = malloc(1 * sizeof(int));
    *pend = pv;
    for (int i = 0; i < x - 1; i++)
    {
        if (*(pend) > *(pv+i))
        {
            *pend = pv+i;
        }
    }
    puts("menor valor do vetor!");
    printf("[%p] \t %d \n", *pend, **pend);

    return 0;
}