/*1. Escreva um programa que receba dois valores por linha de execu¸ c˜ ao e realize a soma ou multi- plica¸ c˜ ao, conforme um c´ odigo de opera¸ c˜ ao tamb´ em recebido por linha de execu¸ c˜ ao.*/

#include <stdio.h>
void soma(int, int, int *);
void multiplicacao(int, int, int *);

int main(int argc, char *argv[])
{

    int x, y, op, r ;
    int (*pfunc[])() = {soma, multiplicacao};

    if (argc != 4)
    {
        printf("erro! \n informe os argumentos necessarios! \n \t \t valor01, valor02, operacao!");
        exit(1);
    }

    x = atoi(argv[1]);
    y = atoi(argv[2]);
    op = atoi(argv[3]);

    if (op > 1)
    {
        printf("operacao invalida!");
        exit(2);
    }

(*pfunc[op]) (x, y, &r);
printf("o resultado da operacao e : %d ", r );

    return 0;
}

void soma(int a, int b, int *c)
{
    *c = a + b;
}

void multiplicacao(int a, int b, int *c)
{
    *c = a * b;
}