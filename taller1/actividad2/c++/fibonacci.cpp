
#include <iostream>

int fibonacci(int n) {
    if (n == 0) {
        return 0; // Caso base: Fibonacci(0) es 0
    } else if (n == 1) {
        return 1; // Caso base: Fibonacci(1) es 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Llamada recursiva
    }
}

int main() {
    int n;
    std::cout << "Ingresa la cantidad de términos de la serie de Fibonacci: ";
    std::cin >> n;

    std::cout << "Serie de Fibonacci: ";
    for (int i = 0; i < n; i++) {
        std::cout << fibonacci(i) << " "; // Imprime cada número de la serie
    }
    std::cout << "\n";

    return 0;
}

