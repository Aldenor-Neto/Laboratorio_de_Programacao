//2. Escreva um programa em C que utilize uma Estrutura estoque que cont´ em uma string com o nomePeca, um n´ umero inteiro para identificar o n´ umero da pe¸ ca, o pre¸ co em ponto flutuante e um elemento inteiro para identificar o n´ umero do pedido.

#include <stdio.h>
#define tam 50

struct estoque
{
    char nomepeca[tam] ;
    int numpeca ;
    float preco ;
    int numped ;
};

int main(){

struct estoque dados ;

puts("nome do produto");
fgets(dados.nomepeca, tam, stdin);
fflush(stdin);

puts("numero do produto");
scanf("%d", &dados.numpeca );
fflush(stdin);

puts("valor do produto");
scanf("%f", &dados.preco );
fflush(stdin);

puts("numero do pedido");
scanf("%d", &dados.numped );
fflush(stdin);

printf("Cod: %d, Produto: %s, R$ %.2f, Pedido: %d ", dados.numpeca, dados.nomepeca, dados.preco, dados.numped );

    return 0;
}