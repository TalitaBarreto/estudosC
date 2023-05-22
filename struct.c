#include <stdio.h>
#include <string.h>
#include <locale.h>

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

    pessoa pessoa;
    
    /*printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Altura: %0.2f\n", pessoa.altura);
    printf("Peso: %0.2f\n", pessoa.peso);*/

    printf("Digite um nome: ");
    scanf("%100[^\n]", pessoa.nome);
    printf("Digite uma idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digite uma altura: ");
    scanf("%f", &pessoa.altura);
    printf("Digite um peso: ");
    scanf("%f", &pessoa.peso);

    printf("\n------------------------\n\n");

    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Altura: %0.2f\n", pessoa.altura);
    printf("Peso: %0.2f\n", pessoa.peso);

    pessoa.imc = pessoa.peso / (pessoa.altura * pessoa.altura);

    printf("\n------------------------\n\n");
    printf("Seu IMC eh: %0.2f", pessoa.imc);


}