#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 20

void gerar_vetor(int *, int, int);
void imprimir_vetor(int *, int);
void ordenacao(int *, int);
int main(int argc, char *argv[])
{

    int *px = NULL;
    int *py = NULL;
    int x, y;

    if (argc != 3)
    {
        printf("erro informe os argumentos necessarios. \n tam vet1, tam vet2");
        exit(1);
    }

    x = atoi(argv[1]);
    y = atoi(argv[2]);

    px = malloc(x * sizeof(int));
    if (!(px = malloc(x * sizeof(int))))
    {
        printf("erro de alocacao de memoria!");
        exit(2);
    }

    py = malloc(y * sizeof(int));
    if (!(py = malloc(y * sizeof(int))))
    {
        printf("erro de alocacao de memoria!");
        exit(3);
    }

    srand(time(NULL));

    puts("O vetor de X e ");
    gerar_vetor(px, x, max);
    imprimir_vetor(px, x);

    puts("o vetor de Y e ");
    gerar_vetor(py, y, max);
    imprimir_vetor(py, y);

    int *pc = NULL;
    int c = 0;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (*(px + i) == *(py + j))
            {
                c++;
            }
        }
    }

    if (c != 0)
    {
        pc = malloc(c * sizeof(int));
        if (!(pc = malloc(c * sizeof(int))))
        {
            printf("erro de alocacao de memoria!");
            exit(4);
        }

        // gerando vetor de intercecao
        int k = 0;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if (*(px + i) == *(py + j))
                {
                    *(pc + k) = *(px + i);
                    k++;
                }
            }
        }

        ordenacao(pc, c);

        int *pw = NULL;
        int w = 1;

        for (int i = 0; i < (c - 1); i++)
        {
            if (*(pc + i) != *(pc + (i + 1)))
            {
                w++;
            }
        }

        pw = malloc(w * sizeof(int));
        if (!(pw = malloc(w * sizeof(int))))
        {
            printf("erro de alocacao de memoria");
            exit(5);
        }

        k = 1;
        *pw = *pc;

        for (int i = 0; i < (c - 1); i++)
        {
            if (*(pc + i) != *(pc + (i + 1)))
            {
                *(pw + k) = *(pc + (i + 1));
                k++;
            }
        }

        puts("vetor de intercecao!");
        imprimir_vetor(pw, w);
    }

    else
    {
        printf("nao existe intercecao entre os vetores!");
    }

    return 0;
}

void gerar_vetor(int *p, int x, int mx)
{
    for (int i = 0; i < x; i++)
    {
        *(p + i) = rand() % mx;
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