#include <stdio.h>

int main(){

    int h, m, s;

    puts("informe a quantidade de horas.");
    scanf("%d", &h);
    fflush(stdin);
    puts("informe a quantidade de minutos.");
    scanf("%d", &m);
    fflush(stdin);
    puts("infomrme a quantidade de segundos.");
    scanf("%d", &s);
    fflush(stdin);
    printf("a quantidade de segundos total do tempo informado e %d", (h * 3600) + (m *60) + s );
    return 0;
}