/*5. Escreva um programa que some todos os elementos de um vetor de float alocado dinamicamente. A quantidade de elementos devem ser fornecidas por linha de comando. Utilize a fun¸ c˜ ao rand() para alimentar o vetor com valores pseudo-aleat´ orios.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define mx 30

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("erro! \n informe os argumentos necessarios. \n \t \t tam vet!");
        exit(1);
    }

    int x = atoi(argv[1]);
    float *pv = malloc(x * sizeof(float));
    if (!(pv = malloc(x * sizeof(float))))
    {
        printf("erro de alocacao de memoria!");
        exit(2);
    }

    srand(time(NULL));

    puts("vetor gerado!");
    for (int i = 0; i < x; i++)
    {
        *(pv + i) = rand() / (float)RAND_MAX * mx;
        printf("%.2f, ", *(pv + i));
    }
    printf("\n");

    float soma = 0;
    for (int i = 0; i < x; i++)
    {
        soma = soma + *(pv + i);
    }
    printf("a soma dos valores do vetor e = %.2f", soma);

    return 0;
}