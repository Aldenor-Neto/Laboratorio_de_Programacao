//1. Escreva um programa em C que utilize uma Estrutura aluno para conter duas notas, lidas do usu´ ario, e sua m´ edia.

#include <stdio.h>

struct aluno
{
    float n1;
    float n2;
    float media;
};

int main()
{
    struct aluno notas;

    puts("informe a 1 nota");
    scanf("%f", &notas.n1);
    fflush(stdin);

    puts("informe a 2 nota");
    scanf("%f", &notas.n2);
    fflush(stdin);

    notas.media = (notas.n1 + notas.n2) / 2 ;

    printf("N1 = %.2f \n", notas.n1);;
    printf("N2 = %.2f \n", notas.n2);
    printf("Media = %.2f \n", notas.media);

    return 0;
}