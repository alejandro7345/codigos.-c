#include <iostream>
#include <string>

int main() {
    std::string concatenatedNumbers;
    int number;
    int numbersRead = 0;

    std::cout << "Ingresa 5 números (ingresa 0 o un número negativo para detener la lectura):" << std::endl;

    while (numbersRead < 5) {
        std::cin >> number;
        if (number <= 0) {
            break;
        }
        concatenatedNumbers += std::to_string(number);
        numbersRead++;
    }

    std::cout << "Cadena de números leídos: " << concatenatedNumbers << std::endl;

    return 0;
}

