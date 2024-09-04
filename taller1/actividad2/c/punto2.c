#include <stdio.h>

// Definir la estructura para almacenar las notas
struct Notas {
    float parcial1;
    float parcial2;
    float parcialFinal;
    float talleres;
    float quiz;
};

float calcularNotaFinal(struct Notas notas);

int main() {
    struct Notas notas;  // Crear una variable de la estructura Notas
    float notaFinal;

    // Solicitar las notas al usuario
    printf("Ingrese la nota del Parcial 1 (20%%): ");
    scanf("%f", &notas.parcial1);

    printf("Ingrese la nota del Parcial 2 (20%%): ");
    scanf("%f", &notas.parcial2);

    printf("Ingrese la nota del Parcial Final (20%%): ");
    scanf("%f", &notas.parcialFinal);

    printf("Ingrese la nota de Talleres (10%%): ");
    scanf("%f", &notas.talleres);

    printf("Ingrese la nota del Quiz (10%%): ");
    scanf("%f", &notas.quiz);

    // Calcular la nota final
    notaFinal = calcularNotaFinal(notas);

    // Mostrar la nota final
    printf("\nLa nota final del curso es: %.2f\n", notaFinal);

    return 0;
}

// Función para calcular la nota final
float calcularNotaFinal(struct Notas notas) {
    return (notas.parcial1 * 0.20) +
           (notas.parcial2 * 0.20) +
           (notas.parcialFinal * 0.20) +
           (notas.talleres * 0.10) +
           (notas.quiz * 0.10);
}