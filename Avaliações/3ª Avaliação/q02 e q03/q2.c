/*2. Escreva um programa em C que organize em uma Estrutura o endereço de um vetor de
inteiros alocado dinamicamente e a quantidade de elementos desse vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funcao.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("erro \n informe tam vet, maior valor");
        exit(1);
    }

    int TAM = atoi(argv[1]);
    int MX = atoi(argv[2]);

    dados q;
    int *vet = malloc(TAM * sizeof(int));
    if (!vet)
    {
        printf("erro de alocacao de memoria!");
        exit(2);
    }

    q.pend = &vet;
    printf("endereco vetor [%p] \n ", *q.pend);

q.elem = TAM ;

    srand(time(NULL));

    gerar_vetor(vet, TAM, MX);
    imprimir_vetor(vet, TAM);
    
    printf("quantidade de elementos %d \n", q.elem);

puts("funcao da questao 03");
int sm = somatorio(&q, vet);
printf("somatorio = %d \n", sm );

    return 0;
}
