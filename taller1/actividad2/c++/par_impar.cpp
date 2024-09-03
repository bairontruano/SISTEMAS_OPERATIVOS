#include <iostream>

int main() {
    int n;
    std::cout << "Ingresa un número entero: ";
    std::cin >> n;

    if(n % 2 == 0) {
        std::cout << "El número es par\n";
    } else {
        std::cout << "El número es impar\n";
    }
    return 0;
}