#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <unordered_map>

int main() {
    std::string filename = "programa1.txt";
    std::ifstream file(filename);

    if (!file) {
        std::cerr << "No se pudo abrir el archivo " << filename << std::endl;
        return 1;
    }

    //Simulacion de registros
    std::unordered_map<std::string, int> registros;
    int accumulator = 0;

    std::string linea, instruccion, dato1, dato2, dato3;

    //Deberia guardar cada vez que ponga set, agregar al diccionario la llave con el id "D5" por ejemplo. La llave y lo que almacena es el valor entero.
    //Add D5 (llave D5, trae el valor y se suma)


    while (std::getline(file, linea)) {
        //Istringstream es para dividir la linea en partes
        std::istringstream iss(linea);
        //Guardar en las variables
        iss >> instruccion >> dato1 >> dato2 >> dato3;
        //Casos de registros
        if (instruccion == "SET") {
            //Dato2(string)to(int) se guarda en Dato1
            registros[dato1] = std::stoi(dato2);

        } else if (instruccion == "LDR") {
            //Cargar el valor del registro en el acumulador
            accumulator = registros[dato1];

        } else if (instruccion == "ADD") {
            //Sumar el valor del registro al acumulador (acumulador actual + valor)
            accumulator += registros[dato1];

        } else if (instruccion == "STR") {
            //Almacenar el valor actual del acumulador en el registro
            registros[dato1] = accumulator;

        } else if (instruccion == "SHW") {
            //Mostrar el valor del registro especificado
            std::cout << registros[dato1] << std::endl;

        } else if (instruccion == "END") {
            //Terminar la ejecución del ciclo de instrucciones
            break;
        }

    }

    file.close();
    return 0;
}
