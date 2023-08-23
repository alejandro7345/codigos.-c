#include<iostream>

using namespace std;

int main() {
    int numeros[10];
    int mayor, menor, suma = 0;

    // Pedir los 10 números al usuario
    for (int i = 0; i < 10; i++) {
        cout << "Introduce el número " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
        
        // Si es el primer número, asignarlo como el mayor y el menor
        if (i == 0) {
            mayor = menor = numeros[i];
        } else {
            // Comprobar si es el nuevo mayor
            if (numeros[i] > mayor) {
                mayor = numeros[i];
            }
            // Comprobar si es el nuevo menor
            if (numeros[i] < menor) {
                menor = numeros[i];
            }
        }
    }

    // Calcular el promedio
    float promedio = suma / 10.0;
    
    // Imprimir el mayor, el menor y el promedio
    cout << "El número mayor es: " << mayor << endl;
    cout << "El número menor es: " << menor << endl;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
