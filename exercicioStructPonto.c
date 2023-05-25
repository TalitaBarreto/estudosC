#include <stdio.h>
#include <math.h>

// Definição da estrutura ponto
struct Ponto {
    float x;
    float y;
};

// Protótipo das funções
struct Ponto lerUmPonto();
float calcularDistanciaPontos(struct Ponto ponto1, struct Ponto ponto2);

int main() {
    struct Ponto ponto1, ponto2;
    float distancia;

    printf("Digite as coordenadas do primeiro ponto:\n");
    ponto1 = lerUmPonto();

    printf("\nDigite as coordenadas do segundo ponto:\n");
    ponto2 = lerUmPonto();

    distancia = calcularDistanciaPontos(ponto1, ponto2);

    printf("\nA distancia entre os dois pontos eh: %.2f\n", distancia);

    return 0;
}

// Função para ler um ponto
struct Ponto lerUmPonto() {
    struct Ponto ponto;

    printf("Coordenada x: ");
    scanf("%f", &ponto.x);

    printf("Coordenada y: ");
    scanf("%f", &ponto.y);

    return ponto;
}

// Função para calcular a distância entre dois pontos
float calcularDistanciaPontos(struct Ponto ponto1, struct Ponto ponto2) {
    float deltaX = ponto1.x - ponto2.x;
    float deltaY = ponto1.y - ponto2.y;
    float distancia = sqrt(pow(deltaX, 2) + pow(deltaY, 2));
    return distancia;
}
