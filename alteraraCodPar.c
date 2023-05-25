#include <stdio.h>
#define TAM_MAX 10

typedef struct pilha {
    int vetor[TAM_MAX];
    int topo;
} Pilha;

Pilha p;

void push(int numero);
int pop();
void imprimir();
int verificarCheia();
int verificarVazia();
void inicializar();

void inicializar() {
    p.topo = -1;
}

int verificarVazia() {
    if (p.topo == -1)
        return 1;
    else
        return 0;
}

int verificarCheia() {
    if (p.topo == TAM_MAX - 1)
        return 1;
    else
        return 0;
}

void push(int numero) {
    // Verificar se a pilha não está cheia e se o número é par
    if (!verificarCheia() && numero % 2 == 0) {
        // Atualiza o topo da pilha
        p.topo++;
        // Insere o elemento no vetor na posição topo
        p.vetor[p.topo] = numero;
    } else {
        // Se estiver cheia ou o número for impar, informa o usuário
        printf("\nNao eh possivel inserir, pilha cheia ou numero impar.");
    }
}

int pop() {
    // Verificar se a pilha não está vazia
    if (!verificarVazia()) {
        // Define uma variável auxiliar
        int aux;
        // Variável auxiliar irá guardar o elemento do topo da pilha
        aux = p.vetor[p.topo];
        // Atualiza o topo da pilha
        p.topo--;
        // Retorna o número removido
        return aux;
    } else {
        // Se estiver vazia, informa o usuário
        printf("\nA pilha está vazia.");
        return 0;
    }
}

void imprimir() {
    // Verificar se a pilha não está vazia
    if (!verificarVazia()) {
        // Define uma variável auxiliar
        int i;
        printf("\nOs elementos na pilha são:");
        // Percorrer o vetor do topo até a base
        for (i = p.topo; i >= 0; i--)
            // Imprimir o elemento na posição i
            printf("\n%d", p.vetor[i]);
    } else {
        // Se estiver vazia, informa o usuário
        printf("\nA pilha está vazia.");
    }
}

int main() {
    int temp, opcao;
    inicializar();

    do {
        // Exibir o menu
        printf("\n    MENU");
        printf("\n1. Inicializar");
        printf("\n2. Inserir");
        printf("\n3. Remover");
        printf("\n4. Imprimir");
        printf("\n5. Sair");
        printf("\nDigite a opcao desejada: ");

        // Ler a opcao desejada pelo usuario
        scanf("%d", &opcao);

        // Processar a funcionalidade
        switch (opcao) {
            case 1:
                inicializar();
                break;
            case 2:
                printf("Digite um numero: ");
                scanf("%d", &temp);
                push(temp);
                break;
            case 3:
                temp = pop();
                printf("Numero removido: %d", temp);
                break;
            case 4:
                imprimir();
                break;
            case 5:
                printf("Encerrando o programa...");
                break;
            default:
                printf("\nOpcao invalida. Escolha um numero valido de opcao.");
        }

    } while (opcao != 5);

    return 0;
}
