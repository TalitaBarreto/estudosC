#include <stdio.h>
#include <stdlib.h>

#define TAM 10

typedef struct pilha
{
    int item[TAM];
    int topo;

} Pilha;

void inicializarPilha(Pilha *p)
{
    p->topo = -1;
}

int pilhaVazia(Pilha *p)
{
    if (p->topo == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pilhaCheia(Pilha *p)
{
    if (p->topo == TAM - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void pilhaInserir(Pilha *p, int x)
{
    if (pilhaCheia(p) == 1)
    {
        printf("A pilha esta cheia");
    }
    else
    {
        p->topo++;
        p->item[p->topo] = x;
    }
}

int pilhaRemove(Pilha *p)
{
    int aux;
    if (pilhaVazia(p) == 1)
    {
        printf("A pilha está vazia");
    }
    else
    {
        aux = p->item[p->topo];
        p->topo--;
        return aux;
    }
}

int main()
{
    Pilha p;

    inicializarPilha(&p);

    pilhaInserir(&p, 2);
    pilhaInserir(&p, 5);
    pilhaInserir(&p, 8);

    int aux;

    aux = pilhaRemove(&p);

    printf("Valores da pilha: \n");
    for (int i = 0; i <= p.topo; i++)
    {
        printf("%d \n", p.item[i]);
    }
    

    printf("Valor retirado foi: %d", aux);

    return 0;
}