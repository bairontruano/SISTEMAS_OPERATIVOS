#include <iostream>

int main() {
    int año;
    bool esBisiesto = false;

    std::cout << "Digite un año: ";
    std::cin >> año;

    if (año % 4 == 0) {
        esBisiesto = true;
        if (año % 100 == 0) {
            esBisiesto = false;
            if (año % 400 == 0) {
                esBisiesto = true;
            }
        }
    }

    if (esBisiesto) {
        std::cout << "El año " << año << " es bisiesto" << std::endl;
    } else {
        std::cout << "El año " << año << " NO es bisiesto" << std::endl;
    }

    return 0;
}
