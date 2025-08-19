#include <stdio.h>

int main() {

    char produtoA[30] = "Producto A";
    char produtoB[30] = "Producto B";

    unsigned int estoqueProdutoA = 3000;
    unsigned int estoqueProdutoB = 1500;

    float precoProduto = 19.99;
    float precoProduto2 = 29.99;

    unsigned int estoqueMinimoA = 500;  
    unsigned int estoqueMinimoB = 500;

    double valorTotalEstoqueA;
    double valorTotalEstoqueB;
    //Informações do estoque
    printf("Produto A: %s tem %u unidadee e o valor total do estoque é R$ %.2f e cada unidade custa R$ %.2f\n", produtoA, estoqueProdutoA, valorTotalEstoqueA = estoqueProdutoA * precoProduto, precoProduto);
    printf("Produto B: %s tem %u unidadee e o valor total do estoque é R$ %.2f e cada unidade custa R$ %.2f\n", produtoB, estoqueProdutoB, valorTotalEstoqueB = estoqueProdutoB * precoProduto2, precoProduto2);

    int resultadoEstoqueA, resultadoEstoqueB;
    resultadoEstoqueA = estoqueProdutoA >= estoqueMinimoA;
    resultadoEstoqueB = estoqueProdutoB >= estoqueMinimoB;
    //Verificando se o estoque é maior ou igual ao estoque minimo
    printf("O produto a tem estoque minimo %d\n", resultadoEstoqueA); // 1 (verdadeiro)
    printf("O produto b tem estoque minimo %d\n", resultadoEstoqueB); // 1 (verdadeiro)

    printf(" O valor total do estoque A é maior que o valor total do estoque B: %d\n", (valorTotalEstoqueA * estoqueProdutoA) > (valorTotalEstoqueB * estoqueProdutoB)); // 1 (verdadeiro)   
}