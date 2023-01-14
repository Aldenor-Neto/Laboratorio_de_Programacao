#include <stdio.h>

int string(char *, char, char *);

int main()
{

    char str[]= "laboratorio de programacao";
    char carac= 'g';
    char *p = NULL;
    
    printf("a string informada foi : %s \n", str);
    printf("o caractere informado para buffer foi : %c \n", carac);

    int qt = string(str, carac, &p);
    printf("a quantidade de caractere no bufffer e : %d \n", qt);
    return 0;
}

int string(char *s, char c, char *p)
{
    int cont = 0;
    while (s[cont] != c)
    {
        if (s[cont] == "\0")
        {
            break;
        }
        cont++;
    }

    for (int i = 0; i < cont; i++)
    {
        *(p + i) = *(s + i);
    }
    *(p+(cont+1)) = '\0' ;

    return cont;
}