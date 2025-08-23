#include <stdio.h>

int main() {

    int numero;

    printf("Digite sua numero: ");
    scanf("%d", &numero);

    if (numero > 0){
        if (numero % 2 == 0) {
            printf("O número é positivo e par.\n");
        } else {
            printf("O número é positivo e ímpar.\n");
        }
    }



    return 0;
}