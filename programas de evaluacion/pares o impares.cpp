#include <iostream>

using namespace std;

int main() {
    int n, opcion;
    cout << "Elija la opci�n de n�meros que desea imprimir:\n";
    cout << "1. N�meros pares\n";
    cout << "2. N�meros impares\n";
    cout << "Opci�n: ";
    cin >> opcion;
    
    cout << "Ingrese la cantidad de n�meros que desea imprimir: ";
    cin >> n;

    if (opcion == 1) {
        cout << "N�meros pares:";
        for (int i = 0; i < n; i++) {
            cout << " " << 2 * i;
        }
    } else if (opcion == 2) {
        cout << "N�meros impares:";
        for (int i = 0; i < n; i++) {
            cout << " " << 2 * i + 1;
        }
    } else {
        cout << "Opci�n inv�lida.";
    }

    return 0;
}
