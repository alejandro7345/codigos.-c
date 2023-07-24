#include <iostream>
using namespace std;

int main() {
   
    double monto_prestamo;
    int num_meses;

    cout << "Ingrese el monto del prestamo: ";
    cin >> monto_prestamo;

    cout << "Ingrese el numero de meses: ";
    cin >> num_meses;

   
    double tasa_interes_mensual = 0.02;
    double interes_mensual = monto_prestamo * tasa_interes_mensual;
    double interes_total = interes_mensual * num_meses;


    cout << "El interes mensual es: " << interes_mensual << " dolares" << endl;
    cout << "El interes total a pagar es: " << interes_total << "dolares" << endl;

    return 0;
}

