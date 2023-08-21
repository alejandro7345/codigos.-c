#include <iostream>
using namespace std;

int main() {
    int cantidadTeclados;
    cout << "Ingrese la cantidad de teclados a comprar: ";
    cin >> cantidadTeclados;

    double costoPorTeclado;

    if (cantidadTeclados > 8) {
        costoPorTeclado = 85.0;
    } else if (cantidadTeclados >= 4 && cantidadTeclados <= 8) {
        costoPorTeclado = 90.0;
    } else {
        costoPorTeclado = 100.0;
    }

    double totalAPagar = cantidadTeclados * costoPorTeclado;

    cout << "Número de teclados a comprar: " << cantidadTeclados << endl;
    cout << "Total a pagar: " << totalAPagar << " Lempiras" << endl;

    return 0;
}

