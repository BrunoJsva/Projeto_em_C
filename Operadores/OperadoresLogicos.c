
#include <stdio.h>

int main() {

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro número 1 ");
    scanf("%d", &numero1);

    printf("Digite o segundo número 2 ");
    scanf("%d", &numero2);

    //Operação Soma
    soma = numero1 + numero2;

    //Operação Subtração
    subtracao = numero1 - numero2;

    //Operação Multiplicação
    multiplicacao = numero1 * numero2; 

    //Operação Divisão    
    divisao = numero1 / numero2;

    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisao);

    multiplicacao += 2; //multiplicacao = multiplicacao + 2
    printf("A multiplicação mais 2 é: %d\n", multiplicacao);

    multiplicacao -= 2; //multiplicacao = multiplicacao - 2
    printf("A multiplicação menos 2 é: %d\n", multiplicacao);  

}
