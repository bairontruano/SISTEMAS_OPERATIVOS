// program en c to find leap year
#include <stdio.h>

int main() {
    int año;
    int bandera;
    printf("Digite un año: ");
    scanf("%d", &año);
    if(año%4 == 0){
        bandera = 1;
        if(año%100 == 0){
            bandera = 0;
            if(año%400 == 0){
                bandera = 1;
            }else{
                bandera = 0;
            }
        }else{
            bandera = 1;
        }
    }else{
        bandera = 0;
    }
    if(bandera){
        printf("El año %d es bisiesto",año);
    }else{
        printf("El año %d NO es bisiesto",año);
    }
    return 0;
}