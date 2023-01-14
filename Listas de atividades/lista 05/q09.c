/*9. Escreva um programa em C que informe se o somat´orio da diagonal principal de matriz N x N
gerada ´e par ou ´ımpar.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define mx 10

void gerar_mat(int *, int, int, int);
void imprimir_mat(int *, int, int);
void diagonal(int *, int);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("erro de argumetacao! \n informe dimencao matriz!");
        exit(1);
    }

    int x = atoi(argv[1]);
    int *mat = malloc((x * x) * sizeof(int));
    if (!(mat = malloc((x * x) * sizeof(int))))
    {
        printf("erro de alocacao de memoria!");
        exit(2);
    }

    srand(time(NULL));

    puts("matriz gerada!");
    gerar_mat(mat, x, x, mx);
    imprimir_mat(mat, x, x);

diagonal(mat, x);

    return 0;
}

void gerar_mat(int *matriz, int lin, int col, int tam)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < lin; j++)
        {
            *(matriz + ((col * i) + j)) = rand() % tam;
        }
    }
}

void imprimir_mat(int *matriz, int lin, int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < lin; j++)
        {
            printf("%d ", *(matriz + ((col * i) + j)));
        }
        printf("\n");
    }
}

void diagonal(int *matriz, int tam)
{
    int soma = 0;
    for (int i = 0; i < tam; i++)
    {
        soma = soma + *(matriz + ((tam * i) + i));
    }

    if (soma % 2 == 0)
    {
        printf("a soma da diagonal principal e par! [%d", soma);
    }
    else
    {
        printf("a soma da diagonal principal e impar! [%d] ", soma);
    }
}