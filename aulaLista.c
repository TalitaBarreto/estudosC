#include <stdio.h>
#define TAM_MAX 5

// Declarando um Struct
typedef struct _lista{
    int vetor[TAM_MAX];
    int final;
} Lista;

// Declara o Struct chamado l
Lista l;

// Inicializa a Lista setando o final da fila
void inicializar(){
    l.final = -1;
}

// Verifico se está Vazia, 1 true, 0 false
int verificarVazia(){
    if(l.final == -1){
        return 1;
    } else {
        return 0;
    }
}

//  Verifica se está cheio, 1 true, 0 false
int verificarCheia(){
    if(l.final == (TAM_MAX-1)){
        return 1;
    } else {
        return 0;
    }
}

// Função que insere um elemento na lista
void inserir(int numero, int posicao){
    if(!verificarCheia()){
        // Condição existe para verificar se a posição que deseja isnerir é maior que o final, se sim pode adicionar sem transladar
        if(posicao > l.final){
            // Adiciona o elemento ao final da fila, já que a posição do qual ele deseja é maior do que o final
            l.final++;
            l.vetor[l.final] = numero;
        } else {
            int i;
            // For será usado para deixar a posição livre, transladando os demais elementos
            for(i = l.final; i >= posicao; i--){
                l.vetor[i+1] = l.vetor[i];
            }
            l.vetor[posicao] = numero;
        }
    } else {
        printf("A fila estah cheia.\n");
    }
}

// Imprime os elementos da lista
void imprimir(){
    if(!verificarVazia()){
        int i;
        printf("Os elementos na fila sao: \n");
        for(i = 0; i < l.final; i++){
            printf("%d", l.vetor[i]);
        }
    } else {
        printf("Fila vazia.\n");
    }
}

int remover(int posicao){
    if(!verificarVazia()){
        // Verifica se a posicao que deseja remover possui um elemento valido, pois se ela for maior que o final, significa que não existe elemento em tal lugar na lista
        if(posicao <= l.final){
            int i;
            int aux=0;
            // Guarda o elemento que será removido
            aux = l.vetor[posicao];
            // Começa transladar os elementos da estrutura para que nao haja nenhum espaço sem valor
            /*Importa ressaltar aqui, que essa lógica avalia a posição de um vetor que começa no 0, e não da lista que começa com 1
            Logo, por isso que é subtraido um, se fosse usar a logica da lista que começam com 1, não precisaria subtrair 1*/ 
            for(i = posicao; i <= l.final - 1; i++){
                l.vetor[i] = l.vetor[i+1];
            }
        } else {
            printf("Nao existe elemento na posicao informada. \n");
        }
    } else {
        printf("Lista vazia. \n");
    }
}

int main(int argc, char const *argv[]){
    /*int opcao, temp, posicao;
	
	do {
		//exibir o menu
		printf("\n MENU");
		printf("\n1. Inicializar");
		printf("\n2. Inserir");
		printf("\n3. Remover");
		printf("\n4. Exibir");
		printf("\n5. Sair");
		printf("\nDigite a opcao desejada: ");
		//pedir a opcao ao usuario
		scanf("%i", &opcao);
		
		//processar a opcao desejada
		switch(opcao) {
			case 1:
				inicializar();
				break;
			case 2:
				printf("\nDigite um numero: ");
				scanf("%d", &temp);
				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				inserir(temp, posicao);
				break;
			case 3:
				printf("\nDigite a posicao: ");
				scanf("%d", &posicao);
				temp = remover(posicao);
				printf("\nNumero removido: %d",
					temp);
				break;
			case 4:
				imprimir();
				break;
			case 5:
				printf("\nSaindo do programa...");
				break;
			default:
				printf("\nEscolha uma opcao valida!");
		}
		
	} while (opcao != 5);
	return 0;*/
}
