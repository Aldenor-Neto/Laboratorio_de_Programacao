#include <stdlib.h>

typedef struct
{
    int **pend;
    int elem;
} dados;


void gerar_vetor(int *p, int qtd, int max);
void imprimir_vetor(int *p, int qtd);
void ordenar_vetor(int *p, int qtd);
void calc_elem(int *p, int qtd, int *r);
int somatorio(dados *p, int *pv);
