#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 100

// Definição da estrutura Prato
typedef struct {
    char marca[50];
    char cor[20];
    double peso;
} Prato;

// Definição da estrutura Pilha de Pratos
typedef struct {
    Prato pratos[MAX_SIZE];
    int topo;
} PilhaPratos;

// Função para inicializar a pilha
PilhaPratos inicializarPilha() {
    PilhaPratos pilha;
    pilha.topo = -1;
    return pilha;
}

// Função para verificar se a pilha está vazia
bool pilhaVazia(PilhaPratos pilha) {
    return (pilha.topo == -1);
}

// Função para verificar se a pilha está cheia
bool pilhaCheia(PilhaPratos pilha) {
    return (pilha.topo == MAX_SIZE - 1);
}

// Função para empilhar um prato
PilhaPratos empilhar(PilhaPratos pilha, Prato prato) {
    if (pilhaCheia(pilha)) {
        printf("Erro: a pilha está cheia.\n");
        return pilha;
    }

    pilha.topo++;
    strcpy(pilha.pratos[pilha.topo].marca, prato.marca);
    strcpy(pilha.pratos[pilha.topo].cor, prato.cor);
    pilha.pratos[pilha.topo].peso = prato.peso;

    return pilha;
}

// Função para desempilhar um prato
PilhaPratos desempilhar(PilhaPratos pilha) {
    if (pilhaVazia(pilha)) {
        printf("Erro: a pilha está vazia.\n");
        return pilha;
    }

    pilha.topo--;

    return pilha;
}

// Função para imprimir a pilha de pratos
void imprimirPilha(PilhaPratos pilha) {
    if (pilhaVazia(pilha)) {
        printf("A pilha está vazia.\n");
        return;
    }

    printf("Pilha de pratos:\n");
    for (int i = pilha.topo; i >= 0; i--) {
        printf("Marca: %s\n", pilha.pratos[i].marca);
        printf("Cor: %s\n", pilha.pratos[i].cor);
        printf("Peso: %.2lf\n", pilha.pratos[i].peso);
        printf("------------------\n");
    }
}

int main() {
    PilhaPratos pilha = inicializarPilha();
    Prato prato;
    int opcao;

    do {
        printf("1 - Inserir prato\n");
        printf("2 - Remover prato\n");
        printf("3 - Imprimir pilha de pratos\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a marca do prato: ");
                scanf("%s", prato.marca);
                printf("Digite a cor do prato: ");
                scanf("%s", prato.cor);
                printf("Digite o peso do prato: ");
                scanf("%lf", &prato.peso);

                pilha = empilhar(pilha, prato);
                break;
            case 2:
                pilha = desempilhar(pilha);
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
    } while (opcao != 0);

    return 0;
}
