/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

    void piramide();

int main()
{
    piramide();
    
    return 0;
}

void piramide(){
   int c;

    cout << "Ingrese un numero entero : ";
    cin >> c;

    for(int i = 1; i <= c; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << "\n";
    }
}