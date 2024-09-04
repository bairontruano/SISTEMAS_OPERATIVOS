// Programa que verifica las letras mayusculas
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Ingrese un palabra: ");
    fgets(str, sizeof(str), stdin); // Lee desde la entrada estandar(teclado), el tamaño del str menos el caracter nulo

    if (isupper(str[0])) {
        printf("La primera letra es mayúscula.\n");
    } else {
        printf("La primera letra NO es mayúscula.\n");
    }
    return 0;
}