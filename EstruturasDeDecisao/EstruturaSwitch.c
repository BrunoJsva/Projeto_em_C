#include <stdio.h>

int main() {
    int variavelDeControle;

    printf("Digite um valor para a variável de controle: ");
    scanf("%d", &variavelDeControle);


    // Estrutura switch para controle de fluxo baseado no valor da variável for inteiro
    // switch (variavelDeControle) {
    //     case 1:
    //         // Código para o caso valor1
    //         printf("Caso valor1 executado.\n");
    //         break;
    //     case 2:
    //         // Código para o caso valor2
    //         printf("Caso valor2 executado.\n");
    //         break;
    //     case 3:
    //         // Código para o caso valor3
    //         printf("Caso valor3 executado.\n");
    //         break;
    //     default:
    //         // Código para o caso padrão
    //         printf("Nenhum caso correspondente encontrado.\n");
    //         break;  
    // }

        switch (variavelDeControle) {
        case 'a':
            // Código para o caso valor1
            printf("Caso valor1 executado.\n");
            break;
        case 'b':
            // Código para o caso valor2
            printf("Caso valor2 executado.\n");
            break;
        case 'c':
            // Código para o caso valor3
            printf("Caso valor3 executado.\n");
            break;
        default:
            // Código para o caso padrão
            printf("Nenhum caso correspondente encontrado.\n");
            break;  
    }

    return 0;
}