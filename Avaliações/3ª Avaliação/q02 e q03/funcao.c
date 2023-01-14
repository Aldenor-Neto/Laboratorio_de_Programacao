#include <stdio.h>
#include "funcao.h"

void gerar_vetor(int *p, int qtd, int max)
{
    for (int i = 0; i < qtd; i++)
    {
        *(p + i) = rand() % max;
    }
}

void imprimir_vetor(int *p, int qtd)
{
    for (int i = 0; i < qtd; i++)
    {
        printf("%d, ", *(p + i));
    }
    printf("\n");
}

void ordenar_vetor(int *p, int qtd)
{
    int aux;
    for (int i = 0; i < qtd - 1; i++)
    {
        for (int j = i + 1; j < qtd; i++)
        {
            if (*(p + i) > *(p + j))
            {
                aux = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = aux;
            }
        }
    }
}

void calc_elem(int *p, int qtd, int *r)
{
    *r = 1;
    for (int i = 0; i < qtd - 1; i++)
    {
        if (*(p + i) != *(p + (i + 1)))
        {
            *r += 1;
        }
    }
}

int somatorio(dados *p, int *pv)
{
    int soma = 0;
    for (int i = 0; i < p->elem; i++)
    {
        soma += *(pv + i);
    }
    return soma;
}