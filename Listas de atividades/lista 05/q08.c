/*8. Escreva um programa em C que binarize os elementos da matriz M gerada aleatoriamente e com
dimens˜oes obtidas em tempo de execu¸c˜ao. A partir de um limiar t dado, crie a matriz S da seguinte
forma:
Si,j =
(
1 se Mi,j > t
0 caso contr´ario*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define mx 10

void gerar_mat(int *, int, int, int);
void imprimir_mat(int *, int, int);
void binario_mat(int *, int *, int, int, int);

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("erro de argumetacao! \n informe num linha, num coluna e linear");
        exit(1);
    }

    int l = atoi(argv[1]);
    int c = atoi(argv[2]);
    int t = atoi(argv[3]);
    int *mat = malloc((l * c) * sizeof(int));
    if (!(mat = malloc((l * c) * sizeof(int))))
    {
        printf("erro de alocacao de memoria!");
        exit(2);
    }

    int *s = calloc((c * l), sizeof(int));
    if (!(s = calloc((c * l), sizeof(int))))
    {
        printf("erro de alocacao de memoria!");
        exit(3);
    }

    srand(time(NULL));

puts("matriz gerada!");
    gerar_mat(mat, l, c, mx);
    imprimir_mat(mat, l, c);

puts("matriz binaria!");
binario_mat(mat, s, l, c, t);
imprimir_mat(s, l, c);

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

void binario_mat(int *matriz, int *bin, int lin, int col, int ln)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < lin; j++)
        {
            if (*(matriz + ((col * i) + j)) > ln)
            {
                *(bin + ((col * i) + j)) = 1;
            }
        }
    }
}
