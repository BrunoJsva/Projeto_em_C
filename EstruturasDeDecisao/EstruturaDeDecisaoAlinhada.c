#include <stdio.h>

int main() {
    int idade;
    int renda;
    int qtdDependentes;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua renda mensal: ");
    scanf("%d", &renda);

    printf("Digite a quantiadade de dependentes: ");
    scanf("%d", &qtdDependentes);

    if (idade >= 18 || idade <= 65) {
        if (renda < 2000) {
            if() (qtdDependentes >= 2) {
                printf("Desconto de 30%% aplicado.\n");
            } else {
                printf("Desconto de 10%% aplicado.\n");
            }
        } else {
            printf("Você não atende os criterios devido a renda\n");
        }
    } else {
        printf("Você não tem direito a um desconto.\n");
    }


    return 0;
}