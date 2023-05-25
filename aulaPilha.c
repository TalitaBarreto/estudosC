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

void inicializar(){
	p.topo = -1;
}

int verificarVazia(){
	if(p.topo == -1)
		return 1;
	else return 0;
}

int verificarCheia(){
	if(p.topo == TAM_MAX - 1)
		return 1;
	else return 0;
}

void push(int numero){
	//verificar se a pilha nao estah cheia
	if(!verificarCheia()) {
		//atualiza o topo da pilha
		p.topo++;
		//insere o elemento no vetor na posi��o topo
		p.vetor[p.topo] = numero;
	} else {
		//se estiver cheia, informa o usu�rio
		printf("\nNao eh possivel inserir, pilha cheia.");
	}
}

int pop(){
	//verificar se a pilha nao estah vazia
	if(!verificarVazia()) {
		//define vari�vel uma variavel auxiliar
		int aux;
		//variavel auxiliar ira guardar o elemento do topo da pilha
		aux = p.vetor[p.topo];
		//atualiza o topo da pilha
		p.topo--;
		//retorna o numero removido
		return aux;
	} else {
		//se estiver vazia, informa o usu�rio
		printf("\nA pilha estah vazia.");
		return 0;
	}
}

void imprimir(){
	//verificar se a pilha n�o est� vazia
	if(!verificarVazia()) {
		//define uma vari�vel auxiliar
		int i;
		printf("\nOs elementos na pilha sao:");
		//percorrer o vetor do topo ate a base
		for(i = p.topo; i >= 0; i--)
			//imprimir o elemento na posicao i
			printf("\n%d", p.vetor[i]);
	} else {
		//se estiver vazia, informa o usuario
		printf("\nA pilha esta vazia.");
	}
}

int main() {
	int temp, opcao;
	inicializar();

	do {
		//exibir o menu
		printf("\n    MENU");
		printf("\n1. Inicializar");
		printf("\n2. Inserir");
		printf("\n3. Remover");
		printf("\n4. Imprimir");
		printf("\n5. Sair");
		printf("\nDigite a opcao desejada: ");
		
		//ler a opcao desejada pelo usuario
		scanf("%d", &opcao);
		
		//processar a funcionalidade
		switch(opcao) {
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
		
	} while(opcao != 5);
}
