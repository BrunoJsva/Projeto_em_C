#include <stdio.h>

int main() {

    int idade = 25;
    int quantidade = 10;
    char letra = 'A';
    char nome[20] = "João";
    float altura = 1.82;
    double peso = 96.5;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade informada é: %d\n", idade);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);
    printf("A quantidade informada é: %d\n", quantidade);

    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    printf("A letra informada é: %c\n", letra);

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("O nome informado é: %s\n", nome);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura informada é: %.2f\n", altura);

    printf("Digite o seu peso: ");
    scanf("%lf", &peso);
    printf("O peso informado é: %.2f kg\n", peso);

    printf("O seu nome é %s, você tem %d anos, sua altura é %.2f e seu peso é %.2f kg.\n", nome, idade, altura, peso);

    return 0;


}