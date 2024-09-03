#include <iostream>
#include <string>

//Primera letra mayúscula
bool esPrimeraMayuscula(const std::string &str) {
    if (str.empty()) return false;
    return (str[0] >= 'A' && str[0] <= 'Z');
}

int main() {
    std::string cadena;

    std::cout << "Ingrese una cadena: ";
    std::getline(std::cin, cadena);

    if (esPrimeraMayuscula(cadena)) {
        std::cout << "La primera letra es mayúscula" << std::endl;
    } else {
        std::cout << "La primera letra no es mayúscula" << std::endl;
    }

    return 0;
}






