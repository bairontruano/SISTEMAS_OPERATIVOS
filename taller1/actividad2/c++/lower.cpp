#include <iostream>
#include <string>

//Primera letra minúscula
bool esPrimeraMinuscula(const std::string &str) {
    if (str.empty()) return false;
    return (str[0] >= 'a' && str[0] <= 'z');
}

int main() {
    std::string cadena;

    std::cout << "Ingrese una cadena: ";
    std::getline(std::cin, cadena);

    if (esPrimeraMinuscula(cadena)) {
        std::cout << "La primera letra es minúscula" << std::endl;
    } else {
        std::cout << "La primera letra no es minúscula" << std::endl;
    }

    return 0;
}
