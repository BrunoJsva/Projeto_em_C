#include <stdio.h>
 
int main() {
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // 'a' é explicitamente convertido para float
 
    printf("Quociente: %.2f\n", quociente);
 
    return 0;

    /*
    Verifique os tipos
    Sempre verifique os tipos de dados ao realizar operações aritméticas para evitar resultados inesperados.

    Use casting quando necessário
    Utilize casting explícito para garantir que as operações sejam realizadas no tipo de dado correto.

    Cuidado com a precisão
    Lembre-se de que variáveis de ponto flutuante podem introduzir erros de precisão. Use double para maior precisão quando necessário.
    */
}