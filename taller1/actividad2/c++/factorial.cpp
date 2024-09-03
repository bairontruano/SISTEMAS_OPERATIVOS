
#include <iostream>

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; // Caso base: el factorial de 0 es 1
    } else {
        return n * factorial(n - 1); // Llamada recursiva
    }
}

int main() {
    int n;
    std::cout << "Ingresa un número entero: ";
    std::cin >> n;
    std::cout << "El factorial de " << n << " es " << factorial(n) << ".\n";
    return 0;
}


