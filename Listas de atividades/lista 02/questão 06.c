#include <stdio.h>

int main(){

int v, n, b, p, r, x, t ;

p = 0 ;
r = 0 ;
n = 0 ;
b = 0 ;

while(v>=0){

puts("para finalizar a votacao digite um numero negativo!");
puts("informe o numero do seu candidato a presidencia!");
scanf("%d", &v );
fflush(stdin);

if (v == 5) {
    printf("confirma seu voto no candidato Paulo! \n digite 1 para confirmar e 2 para corrigir.");
    scanf("%d", &x );
    fflush(stdin);
switch(x)    {
    case 1 :
    p +=1 ;
    break ;
    case 2 :
    break ;
    default :
    break;
}
}

if (v == 7){
    printf("confirma seu voto na candidata Renata! \n digite 1 para confirmar e 2 para corrigir.");
    scanf("%d", &x );
    fflush(stdin);
    switch(x){
        case 1:
        r +=1 ;
        break ;
        case 2:
        break;
        default :
        break;
    }
}

if (v == 0 ){
    printf("confirma o voto em Branco! \n digite 1 para confirmar e 2 para corrigir.");
    scanf("%d", &x);
    fflush(stdin);
    switch(x){
        case 1:
        b +=1 ;
        break ;
        case 2:
        break ;
        default :
        break ;
    }
}

if (v != 5 && v != 7 && v != 0 && v > 0 ){
    printf("confirma o voto Nulo! \n digite 1 para confirmar e 2 para corrigir.");
    scanf("%d", &x );
    switch(x){
        case 1 :
        n +=1 ;
        break;
        case2 :
        break;
        default :
        break;
    }
}

}
t = p+r+b+n ;

printf("A quantidade de votos do candidato Paulo foi : %.2f %%\n", ((float)p/t)*100 );
printf("A quantidade de votos da candidata Renata foi : %.2f %% \n", ((float)r/t)*100 );
printf("a quantidade de votos brancos foi : %.2f %% \n", ((float)b/t)*100 );
printf("A quantidade de votos nulos foi : %.2f %% \n", ((float)n/t)*100 );

if (p>r){
    printf("o Candidato Paulo venceu as eleicoes!");
}
else {
    printf("A candidata Renata venceu as eleicoes!");
}

    return 0;
}