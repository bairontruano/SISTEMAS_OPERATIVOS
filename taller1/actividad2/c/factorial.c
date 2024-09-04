// programa que calcula el factorial
#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; // Caso base: el factorial de 0 es 1
    } else {
        return n * factorial(n - 1); // Llamada recursiva
    }
}

int main() {
    int n;
    printf("Ingresa un número entero: ");
    scanf("%d", &n);
    printf("El factorial de %d es %llu.\n", n, factorial(n));
    return 0;
}