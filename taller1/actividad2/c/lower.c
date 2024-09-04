// Programa que verifica las letras minusculas
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Ingrese un palabra: ");
    fgets(str, sizeof(str), stdin); // Lee desde la entrada estandar(teclado), el tamaño del str menos el caracter nulo

    if (islower(str[0])) {
        printf("La primera letra es minuscula.\n");
    } else {
        printf("La primera letra NO es minuscula.\n");
    }
    return 0;
}