//5. Crie uma Estrutura disciplina em que um dos campos corresponde tamb´em a uma estrutura professor.

#include <stdio.h>

struct disciplina
{
    char nome[50];
    char turno[10];
    int serie;
    struct disciplina *professor;
};

int main()
{
    struct disciplina escola;

    escola.professor = malloc(sizeof(struct disciplina));
    if (!escola.professor)
    {
        printf("erro de alocacao de memoria");
        exit(1);
    }
    puts("nome aluno");
    fgets(escola.nome, 50, stdin);
    fflush(stdin);

    puts("turno");
    fgets(escola.turno, 10, stdin);
    fflush(stdin);

    puts("serie");
    scanf("%d", &escola.serie);
    fflush(stdin);

    puts("professor");
    fgets(escola.professor->nome, 50, stdin);
    fflush(stdin);

    printf("aluno: %s\n  turno: %s \n serie: %d \n professor: %s ", escola.nome, escola.turno, escola.serie, escola.professor->nome);
    return 0;
}