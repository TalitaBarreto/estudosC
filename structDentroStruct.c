#include <stdio.h>

typedef struct Endereco
{
    char rua[500];
    char num[10];
    char bairro[100];
} Endereco;

typedef struct Pessoa
{
    char nome[100];
    int idade;
    Endereco endereco;
} Pessoa;

Pessoa p;

int main()
{

    printf("Digite um nome: ");
    scanf("%99[^\n]", p.nome);
    getchar(); // Descarta o caractere de nova linha

    printf("Digite uma idade: ");
    scanf("%d", &p.idade);
    getchar(); // Descarta o caractere de nova linha

    printf("Digite seu endereco (rua): ");
    scanf("%499[^\n]", p.endereco.rua);
    getchar(); // Descarta o caractere de nova linha

    printf("Digite seu endereco (numero): ");
    scanf("%9[^\n]", p.endereco.num);
    getchar(); // Descarta o caractere de nova linha

    printf("Digite seu endereco (bairro): ");
    scanf("%99[^\n]", p.endereco.bairro);
    getchar(); // Descarta o caractere de nova linha

    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Endereco: Rua %s, numero: %s, Bairro: %s \n", p.endereco.rua, p.endereco.num, p.endereco.bairro);
    
    return 0;
}
