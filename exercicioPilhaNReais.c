#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Definição da estrutura Pilha de Números Reais
typedef struct {
    double elementos[MAX_SIZE];
    int topo;
} PilhaReais;

// Função para inicializar a pilha
PilhaReais inicializarPilha() {
    PilhaReais pilha;
    pilha.topo = -1;
    return pilha;
}

// Função para verificar se a pilha está vazia
bool pilhaVazia(PilhaReais pilha) {
    return (pilha.topo == -1);
}

// Função para verificar se a pilha está cheia
bool pilhaCheia(PilhaReais pilha) {
    return (pilha.topo == MAX_SIZE - 1);
}

// Função para empilhar um elemento
PilhaReais empilhar(PilhaReais pilha, double elemento) {
    if (pilhaCheia(pilha)) {
        printf("Erro: a pilha está cheia.\n");
        return pilha;
    }

    pilha.topo++;
    pilha.elementos[pilha.topo] = elemento;
    return pilha;
}

// Função para desempilhar um elemento
PilhaReais desempilhar(PilhaReais pilha) {
    if (pilhaVazia(pilha)) {
        printf("Erro: a pilha está vazia.\n");
        return pilha;
    }

    pilha.topo--;
    return pilha;
}

// Função para imprimir a pilha de elementos
void imprimirPilha(PilhaReais pilha) {
    if (pilhaVazia(pilha)) {
        printf("A pilha está vazia.\n");
        return;
    }

    printf("Pilha de elementos:\n");
    for (int i = pilha.topo; i >= 0; i--) {
        printf("%.2lf\n", pilha.elementos[i]);
    }
}

int main() {
    PilhaReais pilha = inicializarPilha();
    double elemento;
    int opcao;

    do {
        printf("1 - Inserir elemento\n");
        printf("2 - Remover elemento\n");
        printf("3 - Imprimir pilha de elementos\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o elemento a ser inserido: ");
                scanf("%lf", &elemento);

                pilha = empilhar(pilha, elemento);
                printf("Elemento inserido na pilha.\n");
                break;

            case 2:
                if (pilhaVazia(pilha)) {
                    printf("A pilha está vazia.\n");
                } else {
                    pilha = desempilhar(pilha);
                    printf("Elemento removido da pilha.\n");
                }
                break;

            case 3:
                imprimirPilha(pilha);
                break;

            case 0:
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }

        printf("\n");
    } while (opcao != 0);

    return 0;
}
