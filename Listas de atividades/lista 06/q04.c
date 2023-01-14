/*4. Escreva um programa em C que modifique a Quest˜ao 1 para conter um array com 3 alunos. Escreva
uma fun¸c˜ao para calcular a m´edia dos alunos.*/

#include <stdio.h>
#define tam 3

struct aluno
{
    char nome[50];
    float n1;
    float n2;
    float media;
};

void sm(struct aluno m[], float *medger);

int main()
{

    struct aluno dados[tam];

    for (int i = 0; i < tam; i++)
    {

        printf("Nome : %d aluno", i + 1);
        fgets(dados[i].nome, 50, stdin);
        fflush(stdin);

        printf("nota 1 do %d aluno \n", i + 1);
        scanf("%f", &dados[i].n1);
        fflush(stdin);

        printf("nota 2 do %d aluno \n", i + 1);
        scanf("%f", &dados[i].n2);
        fflush(stdin);
    }

    float media_geral;
    sm(dados, &media_geral);
    for (int i = 0; i < tam; i++)
    {
        printf("Aluno: %s N1 = %.2f  N2 = %.2f Media = %.2f \n", dados[i].nome, dados[i].n1, dados[i].n2, dados[i].media);
    }
printf("A media geral dos alunos e = %.2f \n", media_geral );
    return 0;
}

void sm(struct aluno m[], float *medger)
{
    for (int i = 0; i < tam; i++)
    {
        m[i].media = (m[i].n1 + m[i].n2) / 2 ;
    }

    *medger = 0;
    for (int i = 0; i < tam; i++)
    {
        *medger += m[i].media;
    }
    *medger /= (float)tam ;
}