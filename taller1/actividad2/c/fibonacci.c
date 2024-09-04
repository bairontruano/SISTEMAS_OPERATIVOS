// imprimir la serie de fibonacci
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0; // Caso base: Fibonacci(0) es 0
    } else if (n == 1) {
        return 1; // Caso base: Fibonacci(1) es 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Llamada recursiva
    }
}

int main() {
    int n;
    printf("Ingresa la cantidad de términos de la serie de Fibonacci: ");
    scanf("%d", &n);

    printf("Serie de Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i)); // Imprime cada número de la serie
    }
    printf("\n");

    return 0;
}