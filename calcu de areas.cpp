#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
    int opcion;
    double area;

    cout << "Calculadora de areas de figuras geometricas" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Opciones:" << endl;
    cout << "1. Triangulo" << endl;
    cout << "2. Cuadrado" << endl;
    cout << "3. Rectangulo" << endl;
    cout << "4. Circulo" << endl;
   
    cin >> opcion;

    switch (opcion) {
        case 1:
            double base, altura;
            
            cout << "Ingrese la base del triangulo: ";
            cin >> base;
            
            cout << "Ingrese la altura del triangulo: ";
            cin >> altura;
            
            area = 0.5 * base * altura;
            
            break;
        case 2:
            double lado;
            
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            
            area = lado * lado;
            
            break;
        case 3:
            double largo, ancho;
            
            cout << "Ingrese el largo del rectangulo: ";
            cin >> largo;
            
            cout << "Ingrese el ancho del rectangulo: ";
            cin >> ancho;
            
            area = largo * ancho;
            
            break;
        case 4:
            double radio;
            
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;
            
            area = M_PI * pow(radio, 2);
            
            break;
        default:
            cout << "Opcion no valida." << endl;
            
           
    }

    cout << "El area de la figura es: " << area << endl;
    return 0;
}

