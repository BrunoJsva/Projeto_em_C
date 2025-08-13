#include <stdio.h>
#include <string.h>

int main() {

    int idade, matricula;
    float altura;
    char nome[30];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';   

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua matrícula: ");
    scanf("%d", &matricula);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Olá %s, você tem %d anos, sua matrícula é %d e sua altura é %.2f metros.\n", nome, idade, matricula, altura);
    printf("Seja bem-vindo ao curso de C!\n");


    return 0;

}