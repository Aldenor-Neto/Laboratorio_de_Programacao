//7. Calcule o erro m´ edio quadr´ atico entre dois vetores A e B de dimens˜ ao N gerados aleatoriamente. Pesquise a equa¸ c˜ ao.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define mx 10

void gerar_vetor(int *, int, int);
void imprimir_vetor(int *, int);
void eqm(int *, int *, int);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("erro de argumentacao! \n %s  informe tam vet", argv[0] );
        exit(1);
    }

    int tam = atoi(argv[1]);
    int *pa = malloc(tam * sizeof(int));

    if (!pa)
    {
        printf("erro de alocacao de memoria!");
        exit(2);
    }

    int *pb = malloc(tam * sizeof(int));

    if (!pb)
    {
        printf("erro de alocacao de memoria!");
        exit(3);
    }

    srand(time(NULL));

    puts("vetor de A");
    gerar_vetor(pa, tam, mx);
    imprimir_vetor(pa, tam);
    printf("\n");

    puts("vetor de B");
    gerar_vetor(pb, tam, mx);
    imprimir_vetor(pb, tam);
    printf("\n");

eqm(pa, pb, tam);
    return 0;
}

void gerar_vetor(int *p, int tam, int max)
{
    for (int i = 0; i < tam; i++)
    {
        *(p + i) = rand() % max;
    }
}

void imprimir_vetor(int *p, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", *(p + i));
    }
}

void eqm(int *px, int *py, int tam)
{
    float k;
    float soma = 0;
    for (int i = 0; i < tam; i++)
    {
        k = pow((*(py + i) - *(px + i)), 2);
        k /= (float)tam;
        soma += k;
    }
    soma = sqrt(soma);
    printf("EQM = %.2f", soma);
}