#include <stdio.h>

int main() {

    int idade = 25;
    int quantidade = 10;
    char letra = 'A';
    char nome[20] = "João";
    float altura = 1.82;
    double peso = 96.5;
    
    printf("Idade: %d\n", idade);
    printf("Quantidade: %d\n", quantidade);
    printf("Letra: %c\n", letra);
    printf("Nome: %s\n", nome);
    printf("Altura: %f.2\n", altura);
    printf("Peso: %f.2\n", peso);

    printf("O seu nome é %s, você tem %d anos, sua altura é %.2f e seu peso é %.2f kg.\n", nome, idade, altura, peso);

    return 0;

    /*printf("%formato1 %formato2 %formato3 variavel1, variavel2, variavel3")
    
    %d: imprime um inteiro no formato decimal.
    %i: equivalente a %d.
    %f: imprime um número de ponto flutuante no formato padrão
    %e: imprime um número de ponto flutuante na notação cientifica
    %c: imprime um único caractere
    %s: imprime uma cadeia (string) de caracteres
    */
}