/*4. Dado uma lista encadeada com cada nó sendo uma estrutura (struct Node) contendo os
campos x do tipo inteiro e um ponteiro para o próximo nó (struct Node) da lista. Crie uma
função que receba por referência um elemento da lista e imprima o valor x do elemento
seguinte. Se o nó recebido for o último, o ponteiro para o próximo será NULL. Neste caso,
uma mensagem deve ser apresentada ao usuário.

*/

void prox_node(struct_list *p)
{
    if (p->prox == NULL)
    {
        printf("nao a um proximo valor");
    }
    else
    {
        printf("%d ", p->prox->x);
    }
}