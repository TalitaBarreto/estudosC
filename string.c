#include <stdio.h>
#include <string.h>

int main(){
    char nome[51], aux[51];
    
    // Essa mascara não consegue pegar os espaços entre as palavaras
    printf("Digite um nome: ");
    scanf("%s", nome);
    fflush(stdin);
    printf("Nome digitado foi %s\n", nome);

    printf("-----------------------------------------------\n");
    // Essa mascara consegue pegar as palavras e os espaços entre elas
    printf("Digite um nome: ");
    scanf("%50[^\n]s", nome);
    fflush(stdin);
    printf("Nome digitado foi %s\n", nome);

    // inversão de string
    printf("\n----------------------\n");
    printf("String invertida!!\n");
    

    for (int i = 0; nome[i] != '\0'; i++){
        aux[i] = nome[i];
    }

    for (int i = strlen(aux) - 1; i >= 0; i--){
        
        printf("%c", aux[i]);
    }

}