#include <stdio.h>
#define tam_max 5;

// Declarando um Struct
typedef struct _fila{
    int vetor[tam_max];
    int fim;
} fila;

// Inicializando um Struct chamado f
fila f;

// Função que inicia o struct
void inicializar(){
    f.fim = -1;
}

// Funcão que verifica se a fila está vazia, 1 true, 0 false
int verificarVazia(){
    // Se a fila for igual -1, está vazia por convenção
    if(f.fim == -1){
        return 1;
    } else {
        return 0;
    }
}

// Função de verificar se está cheia, 1 true, 0 false
int verificarCheia(){
    /* Verifica se o fim da Fila é igual ao tamanho máximo de armazenamento, aqui é subtraído 1 porque estamos usando um vetor 
    que começa com o índice igual a 0*/
    if(f.fim == (tam_max-1)){
        return 1;
    } else {
        return 0;
    }
}

// Função inserir, verificar se está cheia, se sim adiciona ao fim
void inserir(int dado){
    if(!verificarCheia()){
        // Soma um ao final da fila e adiciona o elemento
        f.fim++;
        f.vetor[f.fim] = dado;
    } else {
        printf("Pilha cheia.")
    }
}

// Função imprimir, verificar se está vázia, senão realiza um loop
void imprimir(){
    int i=;
    if(!verificarVazia()){
        // Contador começa pelo 0 e imprime valores até que seja igual ao valor do fim da Fila
        for(int=0;i <= f.fim; i++){
            printf("%d ", f.vetor[i]);
        }
    } else {
        printf("Pilha vazia.");
    }
}

// Função que remove um elemento e realiza a transladação para rearranjar os elementos em ordem para não sobrar espaços em branco
void remover(){
    int aux=0, i=0;
    if(!verificarVazia()){
        // Sempre o elemento a sair de uma Fila, é o primeiro elemento
        aux = f.vetor[0];
        // Inicia o transladar elementos da direita para a esquerda
        for(i=0; i > f.fim; i++){
            // O elemento da esquerda, recebe o elemento da direita
            f.vetor[i] = f.vetor[i+1];
        }
        // Atualiza o fim da fila porque removemos um elemento da Fila
        f.fim--;
        return aux;
    } else {
        printf("Pilha vazia.");
    }
}

int main(int argc, char const *argv[]){
    return 0;
}
