#include <stdio.h>      

int main() {
    int opcao;
    int valorDeposito;
    int valorDisponivel = 1300; // Exemplo de valor inicial


    printf("Escolha uma opção:\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Verificando saldo...\n");
            printf("Seu saldo é %d\n", valorDisponivel);
            printf("Você pode fazer um saque ou depósito.\n");
            printf("Digite 2 para depósito ou 3 para saque.\n");
            scanf("%d", &opcao);
            if (opcao == 2) {
                printf("Fazendo depósito...\n");
                printf("Digite o valor a ser depositado: ");
                scanf("%d", &valorDeposito);
                printf("Você depositou: R$%d\n", valorDeposito);
            } else if (opcao == 3) {
                printf("Fazendo saque...\n");
                printf("Digite o valor a ser sacado: ");
                scanf("%d", &valorDeposito);
                if (valorDeposito > valorDisponivel) {
                    printf("Saldo insuficiente para saque.\n");
                } else {
                    valorDisponivel -= valorDeposito;
                    printf("Saque realizado com sucesso. Saldo restante: R$%d\n", valorDisponivel);
                }
            } else {
                printf("Opção inválida. Tente novamente.\n");
            }
            break;
        case 2:
            printf("Fazendo depósito...\n");
            printf("Digite o valor a ser depositado: ");
            scanf("%d", &valorDeposito);
            printf("Você depositou: R$%d\n", valorDeposito);
            break;
        case 3:
            printf("Fazendo saque...\n");
            printf("Digite o valor a ser sacado: ");
            scanf("%d", &valorDeposito);
            printf("Você sacou: R$%d\n", valorDeposito);
            if (valorDeposito > valorDisponivel) {
                printf("Saldo insuficiente para saque.\n");
            } else {
                valorDisponivel -= valorDeposito;
                printf("Saque realizado com sucesso. Saldo restante: R$%d\n", valorDisponivel);
            }
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }


    return 0;
}