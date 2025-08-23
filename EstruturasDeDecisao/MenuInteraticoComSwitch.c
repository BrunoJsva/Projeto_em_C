#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao;
    int numeroSorteado, palpite;

    // Menu de opções para o jogo Super Trunfo
    printf("******************************\n");
    printf("* Bem-vindo ao Super Trunfo! *\n");
    printf("******************************\n");

    printf("Menu de opções:\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Instruções\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao:\n");
    scanf("%d", &opcao);


    switch (opcao) {
        case 1:
            printf("Executando o Jogo\n");
            srand(time(0));
            numeroSorteado = rand() % 10;// Inicializa o gerador de números aleatórios
            printf("Adivinhe o número sorteado entre 0 e 9: ");
            scanf("%d", &palpite);
            if (palpite == numeroSorteado) {
                printf("Parabéns! Você acertou o número sorteado: %d\n\n", numeroSorteado);
            } else {
                printf("Você errou! O número sorteado era: %d\n\n", numeroSorteado);
            }
            printf("Obrigado por jogar!\n");
            break;
        case 2:
            int regra;
            printf("Escolha uma opção:\n");
            printf("1. Qual numero eu posso escolher?:\n");
            printf("2. Como funciona o jogo?:\n");
            printf("3. Sair\n");
            scanf("%d", &regra);
             switch(regra){
                case 1:
                    printf("Você pode escolher um número entre 0 e 9.\n");
                    break;
                case 2:
                    printf("O jogo consiste em adivinhar o número sorteado pelo computador.\n");
                    printf("Se você acertar, ganha o jogo. Se errar, perde.\n");
                    break;
                case 3:
                    printf("Saindo das Instruções...\n");
                    break;
                default:
                    printf("Opção inválida. Tente novamente.\n");
                    break;
             }
            break;
        case 3:
            printf("Saindo do Jogo .....\n");
            break;
        default:
            printf("Dia inválido\n");
            break;
    }
}