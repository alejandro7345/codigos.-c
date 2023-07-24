#include <iostream>
using namespace std;

int main() {
   
    double montoprestamo;
    int nummeses;

    cout << "Ingrese el monto del prestamo: ";
    cin >> montoprestamo;

    cout << "Ingrese el numero de meses: ";
    cin >> nummeses;

   
    double tasa_interesmensual = 0.02;
    double interesmensual = monto_prestamo * tasainteresmensual;
    double interestotal = interesmensual * nummeses;


    cout << "El interes mensual es: " << interesmensual << " dolares" << endl;
    cout << "El interes total es: " << interestotal << " dolares" << endl;

    return 0;
}

