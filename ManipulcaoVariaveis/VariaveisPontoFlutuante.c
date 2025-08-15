#include <stdio.h>
 
int main() {
    /*
    Float e Double são bem parecidas, porem o Double e mais preciso nos resultados.
    */

    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y; // Divisão de ponto flutuante
 
    printf("Soma: %.2f\n", soma);// %.2f formata o número para 2 casas decimais.
    printf("Diferença: %.2f\n", diferenca);// %.2f formata o número para 2 casas decimais.
    printf("Produto: %.2f\n", produto);// %.2f formata o número para 2 casas decimais.
    printf("Quociente: %.2f\n", quociente);// %.2f formata o número para 2 casas decimais.
 
    return 0;
}