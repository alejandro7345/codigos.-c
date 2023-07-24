#include <iostream>
using namespace std;
int main() {
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

  
    int * ptrnumero = &num;

  
    if (*ptrnumero % 2 == 0) {
    	
        cout << "El numero ingresado es par." << endl;
    } else {
    	
        cout << "El numero ingresado es impar." <<endl;
    }

    return 0;
}

