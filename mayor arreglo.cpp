#include <iostream>
using namespace std;

int main() {
    int n;  
    cout << "Ingresa el tamaño del arreglo: ";
    cin >> n;

    int arreglo[n];
    cout << "Ingresa los elementos del arreglo:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arreglo[i];
    }

    int numero;
    cout << "Ingresa un número: ";
    cin >> numero;

    cout << "Elementos mayores que " << numero << ":" << endl;
    for (int i = 0; i < n; ++i) {
        if (arreglo[i] > numero) {
            cout << arreglo[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

