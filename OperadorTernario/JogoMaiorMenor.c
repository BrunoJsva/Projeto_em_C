#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numeroJogador, numeroComputador, resultado;
    char comparacao;

    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Número aleatório entre 0 e 100



    printf("Bem-vindo ao jogo Maior ou Menor!\n");

    printf("Escolha um número entre 1 e 100: ");
    scanf(" %d", &numeroJogador);  

    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Digite sua escolha (M/m/E): ");
    scanf("%s", &comparacao);

    switch (comparacao){
    case 'M':
    case 'm':
        numeroJogador > numeroComputador ? printf("Você venceu! O número do computador era %d\n", numeroComputador) : printf("Você perdeu! O número do computador era %d\n", numeroComputador);
        break;
    case 'N':
    case 'n':
        numeroJogador < numeroComputador ? printf("Você venceu! O número do computador era %d\n", numeroComputador) : printf("Você perdeu! O número do computador era %d\n", numeroComputador);
        break;
    case 'I':
    case 'i':
        numeroJogador == numeroComputador ? printf("Você venceu! O número do computador era %d\n", numeroComputador) : printf("Você perdeu! O número do computador era %d\n", numeroComputador);
        break;
    default:
        printf("Opção inválida. Tente novamente.\n");
        break;  
    }

    return 0;
}