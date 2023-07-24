#include <iostream>
#include <string>

using namespace std;

int main() {
    string num;
    
    cout << "Ingrese un numero  "<<endl;
    cin >> num;

  
    string numinvertido = "";
    
    for (int i = num.length() - 1; i >= 0; i--) {
    	
        numinvertido += num[i];
    }

  
    cout << "el numero con sus cifras invertidas es : " << endl<<endl<<"                 "<<numinvertido << endl;

    return 0;
}

