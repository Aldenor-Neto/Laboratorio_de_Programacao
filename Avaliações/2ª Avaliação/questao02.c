/*2. Organize em um vetor V os endereços da primeira ocorrência de valor par e a primeira
ocorrência de valor ímpar em um vetor de inteiros alocado dinamicamente.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define mx 30

int main(int argc, char *argv[])
{

    int *pv = NULL;
    int **pend = NULL;
    if (argc != 2)
    {
        printf("informe os argumentos necessarios \n Tam Vet");
        exit(1);
    }

    int x = atoi(argv[1]);
    pv = malloc(x * sizeof(int));

    srand(time(NULL));

    puts("vetor gerado");
    for (int i = 0; i < x; i++)
    {
        *(pv + i) = rand() % mx;
        printf("endereco : [%p]   valor : %d \n", (pv + i), *(pv + i));
    }
    printf("\n");
    int par = 0;
    int impar = 0;

    for (int i = 0; i < x; i++)
    {
        if (*(pv + i) % 2 == 0)
        {
            par++;
            break;
        }
    }
    for (int i = 0; i < x; i++)
    {
        if (*(pv + i) % 2 != 0)
        {
            impar++;
            break;
        }
    }

    pend = malloc(2 * sizeof(int *));

    puts("primeiros valores!");
    if (par)
    {
        for (int i = 0; i < x; i++)
        {
            if (*(pv + i) % 2 == 0)
            {
                *pend = pv + i;
                break;
            }
        }
    }
    else
    {
        pend = NULL;
    }

    if (impar)
    {
        for (int i = 0; i < x; i++)
        {
            if (*(pv + i) % 2 != 0)
            {
                *(pend + 1) = pv + i;
                break;
            }
        }
    }
    else
    {
        *(pend + 1) = NULL;
    }

    for (int i = 0; i < 2; i++)
    {
        printf("endereco : [%p] e o valor e %d \n", *(pend + i), **(pend + i));
    }
    return 0;
}
