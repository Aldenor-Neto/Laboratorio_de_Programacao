/*1. Dado um  vetor de inteiros A com dimensão k, escreva um programa que armazene em
um vetor B os elementos ímpares de A. O valor de k deve ser fornecido por linha de
comando (argc e argv).  Se A não tiver valor ímpar, uma mensagem deve ser exibida.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define mx 30

int main(int argc, char *argv[])
{

    int *pv = NULL;
    int *pi = NULL;

    if (argc != 2)
    {
        printf("erro! \n informe os argumentos corretos \n Tam VET");
        exit(1);
    }

    int x = atoi(argv[1]);
    pv = malloc(x * sizeof(int));

    if (!(pv = malloc(x * sizeof(int))))
    {
        printf("erro de alocacao de memoria!");
        exit(2);
    }

    srand(time(NULL));

    puts("vetor gerado!");
    for (int i = 0; i < x; i++)
    {
        *(pv + i) = rand() % mx;
        printf("%d, ", *(pv + i));
    }
    int cont = 0;
    for (int i = 0; i < x; i++)
    {
        if (*(pv + i) % 2 != 0)
        {
            cont++;
        }
    }
    printf("\n");

    if (cont > 0)
    {
        pi = malloc(cont * sizeof(int));
        if (!(pi = malloc(cont * sizeof(int))))
        {
            printf("erro de alocacao de memoria!");
            exit(3);
        }

        int k = 0;
        for (int i = 0; i < x; i++)
        {
            if (*(pv + i) % 2 != 0)
            {
                *(pi + k) = *(pv + i);
                k++;
            }
        }

        puts("vetor de impares!");
        for (int i = 0; i < cont; i++)
        {
            printf("%d, ", *(pi + i));
        }
    }
    else
    {
        puts("nao existe impar no vetor gerado!");
    }
    return 0;
}