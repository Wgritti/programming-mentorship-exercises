#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    //Perguntar o nome da pessoa
    printf("Qual é o seu nome? ");
    scanf("%49s", nome);
    
    //Perguntar a idade da pessoa
    printf("Qual é a sua idade? ");
    scanf("%d", &idade);

    //Exibir a mensagem "Seu nome é [nome] e você tem [idade] anos."
    printf("Seu nome é %s e você tem %d anos.\n", nome, idade);

    return 0;
}