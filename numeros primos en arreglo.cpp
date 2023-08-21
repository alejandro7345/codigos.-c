#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    srand(time(0));

    int tamanoVector;
    cout << "Ingresa el tamaño del vector: ";
    cin >> tamanoVector;

    vector<int> numeros(tamanoVector);

    for (int i = 0; i < tamanoVector; ++i) {
        numeros[i] = rand() % 100; 
    }

    int primosEncontrados = 0;

    for (int i = 0; i < tamanoVector; ++i) {
        if (esPrimo(numeros[i])) {
            cout << "Número primo encontrado: " << numeros[i] << endl;
            primosEncontrados++;
        }
    }

    cout << "Total de números primos encontrados: " << primosEncontrados << endl;

    return 0;
}

