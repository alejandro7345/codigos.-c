#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;
    char operador;

    cout << "Ingresa el primer n�mero: ";
    cin >> numero1;
    cout << "Ingresa el segundo n�mero: ";
    cin >> numero2;
    cout << "Ingresa el operador (+, -, x, /, mod): ";
    cin >> operador;

    switch (operador) {
        case '+':
            cout << "Resultado: " << numero1 + numero2 << endl;
            break;
        case '-':
            cout << "Resultado: " << numero1 - numero2 << endl;
            break;
        case 'x':
            cout << "Resultado: " << numero1 * numero2 << endl;
            break;
        case '/':
            if (numero2 != 0) {
                cout << "Resultado: " << static_cast<double>(numero1) / numero2 << endl;
            } else {
                cout << "No es posible dividir por cero." << endl;
            }
            break;
        case 'mod':
            if (numero2 != 0) {
                cout << "Resultado: " << numero1 % numero2 << endl;
            } else {
                cout << "No es posible calcular el m�dulo por cero." << endl;
            }
            break;
        default:
            cout << "Operador no v�lido." << endl;
            break;
    }

    return 0;
}

