#include <iostream>
using namespace std;

int main() {
    char opcion;
    double temperatura;
    int fahrenheit,celsius;

    cout << "Seleccione una opción:\n";
    cout << "a) Convertir de Celsius a Fahrenheit.\n";
   cout << "b) Convertir de Fahrenheit a Celsius.\n";
    cin >> opcion;

    if (opcion == 'a') {
       cout << "Ingrese la temperatura en grados Celsius: ";
        cin >> temperatura;

    fahrenheit = (temperatura * 9/5) + 32;
        cout << "La temperatura en grados Fahrenheit es: " << fahrenheit << " °F\n";
    }
	
	 else if (opcion == 'b' ) {
        cout << "Ingrese la temperatura en grados Fahrenheit: ";
       cin >> temperatura;

         celsius = (temperatura - 32) * 5/9;
        cout << "La temperatura en grados Celsius es: " << celsius << " °C\n";
    } else {
       cout << "Opción no válida. Seleccione 'a' o 'b'.\n";
    }

    return 0;
}

