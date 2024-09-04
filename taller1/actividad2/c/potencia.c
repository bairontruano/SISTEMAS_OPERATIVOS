// Calcular la potencia usando recursion
#include <stdio.h>

int potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else {
        return base * potencia(base, exponente - 1);
    }
}

int main() {
    int base, exponente;

    printf("Ingresa la base: ");
    scanf("%d", &base);
    printf("Ingresa el exponente: ");
    scanf("%d", &exponente);

    int resultado = potencia(base, exponente);

    printf("%d elevado a la potencia %d es %d.\n", base, exponente, resultado);

    return 0;
}