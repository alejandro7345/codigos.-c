#include <iostream>

using namespace std;

int main() {
    int n, opcion;
    cout << "Elija la opción de números que desea imprimir:\n";
    cout << "1. Números pares\n";
    cout << "2. Números impares\n";
    cout << "Opción: ";
    cin >> opcion;
    
    cout << "Ingrese la cantidad de números que desea imprimir: ";
    cin >> n;

    if (opcion == 1) {
        cout << "Números pares:";
        for (int i = 0; i < n; i++) {
            cout << " " << 2 * i;
        }
    } else if (opcion == 2) {
        cout << "Números impares:";
        for (int i = 0; i < n; i++) {
            cout << " " << 2 * i + 1;
        }
    } else {
        cout << "Opción inválida.";
    }

    return 0;
}
