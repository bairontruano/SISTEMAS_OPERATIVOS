// programa que encuentra el numero mas grande de 3 valores
#include <stdio.h>

int mayorNum(int nums[3]){
    int mayor = nums[0];
    for(int i =0; i<3;i++){
        if (nums[i]>mayor){
            mayor = nums[i];
        }
    }
    return mayor;
}

int main() {
    int numeros[3];
    printf("Ingresa tres números:\n");
    for (int i = 0; i < 3; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("El mayor de los numeros es %d",mayorNum(numeros));
    return 0;
}