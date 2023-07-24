#include <iostream>

using namespace std;
int main() {
    const int tamano_array = 10;
    int array[tamano_array];
    int positivos = 0, negativos = 0, nulos = 0;

    // Ingresar los valores al array
    cout << "Ingrese 10 valores enteros separados por espacios:" <<endl;
    for (int i = 0; i < tamano_array; ++i) {
        cin >> array[i];

        // Contar positivos, negativos y nulos
        if (array[i] > 0) {
            positivos++;
        } else if (array[i] < 0) {
            negativos++;
        } else {
            nulos++;
        }
    }

    // Mostrar resultados
    cout << "Cantidad de valores positivos: " << positivos <<endl;
    cout << "Cantidad de valores negativos: " << negativos <<endl;
    cout << "Cantidad de valores nulos: " << nulos <<endl;

    return 0;
}

