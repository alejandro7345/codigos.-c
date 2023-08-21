#include <iostream>
using namespace std;

string esParOImpar(int numero) {
    if (numero % 2 == 0) {
        return "par";
    } else {
        return "impar";
    }
}

int main() {
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;
    
    string resultado = esParOImpar(numero);
    cout << "El numero " << numero << " es " << resultado << "." << endl;

    return 0;
}

