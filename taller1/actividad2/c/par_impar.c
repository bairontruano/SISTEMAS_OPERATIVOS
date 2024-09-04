// Verificar si un numero es par o impar
#include <stdio.h>

int main() {
    int n;
    printf("Ingresa un número entero: ");
    scanf("%d", &n);

    if(n%2 == 0){
        printf("El numero es par");
    }else{
        printf("El numero es impar");
    }
    return 0;
}