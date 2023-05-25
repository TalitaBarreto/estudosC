#include <stdio.h>
#include <string.h>

// Definição da estrutura carro
struct Carro {
    char placa[9];
    float distancia;
    float tempo;
    float velocidadeMedia;
};

// Protótipo das funções
struct Carro lerCarro();
float calcularVelocidade(struct Carro carro);
void verificarMaiorVelocidade(struct Carro carro1, struct Carro carro2);

int main() {
    struct Carro carro1, carro2;

    printf("Dados do primeiro carro:\n");
    carro1 = lerCarro();

    printf("\nDados do segundo carro:\n");
    carro2 = lerCarro();

    carro1.velocidadeMedia = calcularVelocidade(carro1);
    carro2.velocidadeMedia = calcularVelocidade(carro2);

    verificarMaiorVelocidade(carro1, carro2);

    return 0;
}

// Função para ler os dados de um carro
struct Carro lerCarro() {
    struct Carro carro;

    printf("Placa: ");
    scanf("%s", carro.placa);

    printf("Distancia percorrida (em km): ");
    scanf("%f", &carro.distancia);

    printf("Tempo realizado (em horas): ");
    scanf("%f", &carro.tempo);

    return carro;
}

// Função para calcular a velocidade média de um carro
float calcularVelocidade(struct Carro carro) {
    return carro.distancia / carro.tempo;
}

// Função para verificar qual carro teve maior velocidade média
void verificarMaiorVelocidade(struct Carro carro1, struct Carro carro2) {
    if (carro1.velocidadeMedia > carro2.velocidadeMedia) {
        printf("\nO carro com placa %s teve a maior velocidade media.\n", carro1.placa);
    } else if (carro1.velocidadeMedia < carro2.velocidadeMedia) {
        printf("\nO carro com placa %s teve a maior velocidade media.\n", carro2.placa);
    } else {
        printf("\nOs dois carros tiveram a mesma velocidade media.\n");
    }
}
