#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 3

struct tipoPessoa{
    int idade;
    float altura;
    float peso;
    float imc;
    char nome[100];
};

typedef struct tipoPessoa pessoa;


int main(){    

    setlocale(LC_ALL, "Portuguese");

    pessoa pessoas[TAM];

    for (int i = 0; i < TAM; i++)
    {
        printf("\n");
        printf("Digite um nome: ");
        scanf("%99[^\n]", &pessoas[i].nome);
        fflush(stdin);
        printf("Digite uma idade: ");
        scanf("%d", &pessoas[i].idade);
        fflush(stdin);
        printf("Digite uma altura: ");
        scanf("%f", &pessoas[i].altura);
        fflush(stdin);
        printf("Digite um peso: ");
        scanf("%f", &pessoas[i].peso);
        fflush(stdin);

        printf("\n------------------------\n\n");

        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Altura: %0.2f\n", pessoas[i].altura);
        printf("Peso: %0.2f\n", pessoas[i].peso);

        pessoas[i].imc = pessoas[i].peso / (pessoas[i].altura * pessoas[i].altura);

        printf("\n------------------------\n\n");
        printf("Seu IMC eh: %0.2f", pessoas[i].imc);
    }

    

}