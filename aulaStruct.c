#include <stdio.h>

// Definição de um Struct SEM alias (Encurtamento/ Atalho)
struct retangulo{
    int base;
    int altura;
};

// Declaração de um Struct chamado ret[]
struct retangulo ret[10];

// Definição de um struct com alias chamado produto
typedef struct struct_produto{
    int quantidade;
    float valor;
    char nome[50];
} produto;

// Protótipo da função imprimir
void imprimirRetangulo(struct retangulo r);

// Protótipo da função lerRetangulo
struct lerRetangulo(struct retangulo r);

int main(int argc, char const *argv[]){
    struct retangulo ret1;
    ret1.altura = 5;
    ret1.base = 6;

    imprimirRetangulo(ret1);

    return 0;
}

// Como estamos usando um Struct sem o typedef, é necessário declarar o struct dentro da passagem de parâmetros
void imprimirRetangulo(struct retangulo r){
    printf("\nO retangulo tem altura %d e base %d ", r.altura, r.base);
}

// Função do tipo Struct que lê o ret[] do tipo Struct
struct lerRetangulo(struct retangulo r){
    return r;
}