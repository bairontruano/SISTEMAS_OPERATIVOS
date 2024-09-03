
#include <iostream>

int potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else {
        return base * potencia(base, exponente - 1);
    }
}

int main() {
    int base, exponente;

    std::cout << "Ingresa la base: ";
    std::cin >> base;
    std::cout << "Ingresa el exponente: ";
    std::cin >> exponente;

    int resultado = potencia(base, exponente);

    std::cout << base << " elevado a la potencia " << exponente << " es " << resultado;

    return 0;
}
