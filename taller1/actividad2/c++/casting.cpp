#include <iostream>

int main() {
    //Implícita
    int a = 10;
    double b = a;  //int a double
    std::cout << "Valor de b (implicito): " << b << std::endl;

    //Explícita
    double c = 9.78;
    int d = (int)c;  //double a int
    std::cout << "Valor de d (explicito): " << d << std::endl;

    return 0;
}
