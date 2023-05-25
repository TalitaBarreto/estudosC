#include <stdio.h>
#define tam_max 5

// Definindo um struct com typedef chamado pilha
typedef struct _pilha{
    int vet[tam_max];
    int topo;
} pilha;

// Declarando um struct chamado p
pilha p;

// Se retornar 1, é verdadeiro. Se retornar 0, é falso.
int verificarVazia(){
    // Por convenção, o topo é igual -1
    if(p.topo == -1){
        return 1;
    } else {
        return 0;
    }
}

// Verifica se está cheia, 1 true, 0 false
int verificarCheia(){
    /* Verifica se o fim da Pilha é igual ao tamanho máximo de armazenamento, aqui é subtraído 1 porque estamos usando um vetor 
    que começa com o índice igual a 0*/
    if(p.topo == tam_max - 1){
        return 1;
    } else {
        return 0;
    }
}

// Inicia a pilha com o topo -1
void iniciar(){
    p.topo = -1;
}

// Função de inserir chamada push em que verifica se está cheia, senão adiciona um elemento ao topo
void push(int dado){
    if(verificarCheia() != 1){
        // Atualiza o topo (final) e adiciona o elemento
        p.topo++;
        p.vet[p.topo] = dado;
    } else {
        printf("Pilha cheia.");
    }
}

// Função para imprimir a pilha
void imprimir(){
    if(!verificarVazia()){
        // Variável auxiliar é igual ao topo, enquanto ela não for zero, será impresso todos elementos
        for(int i = p.topo; i >= 0; i--){
            printf("\n%d", p.vet[i]);
        }
    } else {
        printf("Pilha vazia.");
    }
}

// Função para remover elemento do topo (final da Pilha)
void pop(){
    if(!verificarVazia()){
        int aux = p.vet[p.topo];
        // Não seria necessário fazer isso, pois o espaço da memória não será mais utilizado, já que o topo foi subtraído
        p.vet[p.topo] = 0;
        p.topo--;
        printf("O número removido foi %d", aux);
    } else {
        printf("Pilha está vazia.");
    }
}

int main(){
    iniciar();
    push(7);
    push(4);
    imprimir();
    
    return 0;
}