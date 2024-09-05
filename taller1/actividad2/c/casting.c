// casting
#include <stdio.h>

int main() {
    float numero = 3.14159;
    int entero;
    //casting explicito
    entero = (int) numero;
    printf("Valor convertido: %d\n", entero);
    
    //casting implicito
    int entero2 = 14;
    float num = entero2 + numero;
    printf("Valor convertido: %f\n", num);
    
    return 0;
}