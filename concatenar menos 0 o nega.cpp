#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadenaConcatenada;
    int numerosIngresados = 0;

    while (numerosIngresados < 5) {
        int numero;
        cout << "Ingresa el n�mero " << numerosIngresados + 1 << ": ";
        cin >> numero;

        if (numero > 0) {
            if (!cadenaConcatenada.empty()) {
                cadenaConcatenada += " ";
            }
            cadenaConcatenada += to_string(numero);
            numerosIngresados++;
        } else if (numero == 0) {
            cout << "Tipo de dato no permitido. Ingresa un n�mero mayor a 0." << endl;
        }
    }

    cout << "Cadena de n�meros le�dos: " << cadenaConcatenada << endl;

    return 0;
}



