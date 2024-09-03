
#include <iostream>

int mayorNum(int nums[3]) {
    int mayor = nums[0];
    for (int i = 0; i < 3; i++) {
        if (nums[i] > mayor) {
            mayor = nums[i];
        }
    }
    return mayor;
}

int main() {
    int numeros[3];
    std::cout << "Ingresa tres números:\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "Número " << i + 1 << ": ";
        std::cin >> numeros[i];
    }
    std::cout << "El mayor de los números es " << mayorNum(numeros) << std::endl;
    return 0;
}
