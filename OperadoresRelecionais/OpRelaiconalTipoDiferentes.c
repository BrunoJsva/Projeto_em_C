#include <stdio.h>

int main() {

    int x = 97;
    float y = 5.0;
    char c = 'a'; //Valor ASCII 97

    printf("x == y: %d\n", x == y); // 1 (verdadeiro)
    printf("x != y: %d\n", x != y); // 0 (falso)
    printf("x > y: %d\n", x > y);   // 0 (falso)
    printf("x < y: %d\n", x < y);   // 0 (falso)
    printf("x >= y: %d\n", x >= y); // 1 (verdadeiro)
    printf("x <= y: %d\n", x <= y); // 1 (verdadeiro)

    printf("x == c: %d\n", x == c); // 1 (verdadeiro)

    return 0;

}