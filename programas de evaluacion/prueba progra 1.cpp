#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para lanzar una moneda
void lanzarMoneda(int n) {
    int cara = 0, cruz = 0;
    
    for (int i = 0; i < n; i++) {
        int resultado = rand() % 2;
        if (resultado == 0) {
            cara++;
            cout << "Lanzamiento #" << i+1 << ": Cara" << endl;
        } else {
            cruz++;
            cout << "Lanzamiento #" << i+1 << ": Cruz" << endl;
        }
    }
    
    cout << "Total de caras: " << cara << endl;
    cout << "Total de cruces: " << cruz << endl;
}

// Función para lanzar un dado
void lanzarDados() {
    int suma = 0;
    int lanzamientos = 0;
    
    while (suma < 60) {
        int dado1 = rand() % 6 + 1;
        int dado2 = rand() % 6 + 1;
        
        suma += dado1 + dado2;
        lanzamientos++;
        
        cout << "Dado 1: " << dado1 << endl;
        cout << "Dado 2: " << dado2 << endl;
        cout << "Suma: " << dado1 + dado2 << endl;
        cout << endl;
    }
    
    cout << "Total de lanzamientos: " << lanzamientos << endl;
    cout << "Suma total de los dados: " << suma << endl;
}

int main() {
    srand(time(NULL));
    
    int opcion;
    cout << "1. Lanzar moneda" << endl;
    cout << "2. Lanzar dados" << endl;
    cout << "Seleccione una opción: ";
    cin >> opcion;
    
    if (opcion == 1) {
        lanzarMoneda(10);
    } else if (opcion == 2) {
        lanzarDados();
    } else {
        cout << "Opción inválida. Por favor, seleccione 1 o 2." << endl;
    }
    
    return 0;
}
