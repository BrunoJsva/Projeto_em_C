#include <stdio.h>

int main() {

    /*
    Incremento ++
    Pre-Incremento ++a
    Pos-Incremento a++
    Decremento --
    Pre-Decremento --a
    Pos-Decremento a--
    */
    int resultado;
    int numero1 = 1;

    printf("Antes do incremento: %d\n", numero1);

    numero1++;
    printf("Depois do incremento: %d\n", numero1);

    numero1--;
    printf("Depois do decremento: %d\n", numero1);

    int numero2 = 5;

    resultado =0;
    resultado = ++numero2;
    printf("Depois do pré-incremento: %d\n", numero2);
    
    numero2 = 5;
    resultado =0;
    resultado = --numero2;
    printf("Depois do pré-decremento: %d\n", numero2);

    numero2 = 5;
    resultado =0;
    resultado = numero2++;
    printf("Depois do incremento: %d\n", numero2);
    
    numero2 = 5;
    resultado =0;
    resultado = numero2--;
    printf("Depois do decremento: %d\n", numero2);
}