// programa en c que muestre los numeros del 1 al 10 en octal, decimal y hexadecimal

#include <stdio.h>

int main() {
    printf("Decimal\tOctal\tHexadecimal\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d\t%o\t%X\n", i, i, i);
    }
    return 0;
}