#include <stdio.h>

int main() {

    // a > b; - Operador de maior que
    // a < b; - Operador de menor que
    // a >= b; - Operador de maior ou igual que
    // a <= b; - Operador de menor ou igual que
    // a == b; - Operador de igualdade
    // a != b; - Operador de desigualdade

    int a = 20, b = 20;

    printf("a > b: %d\n", a > b);   // 0 (falso)
    printf("a < b: %d\n", a < b);   // 1 (verdadeiro)
    printf("a >= b: %d\n", a >= b); // 0 (falso)
    printf("a <= b: %d\n", a <= b); // 1 (verdadeiro)
    printf("a == b: %d\n", a == b); // 0 (falso)
    printf("a != b: %d\n", a != b); // 1 (verdadeiro)

    return 0;

}