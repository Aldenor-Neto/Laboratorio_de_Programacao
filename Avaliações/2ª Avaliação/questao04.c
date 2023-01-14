/*4. Dado um vetor de inteiros ordenado crescentemente, escreva uma função que retorne a
quantidade de elementos diferentes ao longo do vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 5
#define mx 10

int elementos(int *, int);

int main()
{
    int vet[tam];

    srand(time(NULL));

    puts("vetor gerado!");
    for (int i = 0; i < tam; i++)
    {
        vet[i] = rand() % mx;
        printf("%d, ", vet[i]);
    }
    printf("\n");

    int aux;

    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = (i + 1); j < tam; j++)
        {
            if (vet[i] > vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    puts("vetor ordenado!");
    for (int i = 0; i < tam; i++)
    {
        printf("%d, ", vet[i]);
    }
printf("\n");

int num_elem = elementos(vet, tam);
printf("o numero de elementos do vetor e %d ", num_elem );
    return 0;
}

int elementos(int *vet, int qt)
{
    int x = 1;
    for (int i = 0; i < (qt - 1); i++)
    {
        if (vet[i] != vet[i + 1])
        {
            x++;
        }
    }
    return x;
}