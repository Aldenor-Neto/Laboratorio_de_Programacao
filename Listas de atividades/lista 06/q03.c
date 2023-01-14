/*3. Escreva um programa em C que gere um vetor com n´umeros aleat´orios e calcule sua m´edia. Organize uma Estrutura com as seguintes informa¸c˜oes: ponteiro para a matriz, quantidade de elementos
e a m´edia.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 5
#define mx 30

struct vetor
{
    int *pmat;
    float media;
    int qtdelem;
};

void gerar_vetor(int *);
void imprimir_vetor(int *);
void media_vetor(int *, float *);

int main()
{
struct vetor vet ;
    int *pv = malloc(tam * sizeof(int));
    if (!pv)
    {
        printf("erro de alocacao de memoria");
        exit(1);
    }

    srand(time(NULL));

    gerar_vetor(pv);
    
vet.pmat = pv ;
vet.qtdelem = tam ;

media_vetor(vet.pmat, &vet.media);

puts("numeros do vetor!");
imprimir_vetor(vet.pmat);
printf("\n");

printf("quantidade de elementos = %d \n", vet.qtdelem );
printf("media do vetor = %.2f \n", vet.media );

    return 0;
}

void gerar_vetor(int *p)
{
    for (int i = 0; i < tam; i++)
    {
        *(p + i) = rand() % mx;
    }
}

void imprimir_vetor(int *p)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", *(p + i));
    }
}

void media_vetor(int *p, float *m)
{
    *m = 0;
    for (int i = 0; i < tam; i++)
    {
        *m += (float)*(p + i);
    }
    *m /= (float)tam;
}