#include <stdio.h>

int main(){
    int umNum, umNum1, soma = 0;

    
    printf("--- Bem vindo ---\n");
    printf("Digite um numero:");
    scanf("%d", &umNum);
    printf("Digite um segundo numero:");
    scanf("%d", &umNum1);

    soma = umNum + umNum1;

    printf("A soma dos numeros eh: %i", soma);
}