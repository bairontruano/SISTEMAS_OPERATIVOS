#include <iostream>

int main() {
    std::cout << "Decimal\tOctal\tHexadecimal\n";
    for (int i = 1; i <= 10; i++) {
        std::cout << i << "\t" << std::oct << i << "\t" << std::hex << i << std::endl;
        std::cout << std::dec; // Vuelve al formato decimal para la siguiente iteración
    }
    return 0;
}
