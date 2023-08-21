#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numeros(10);

    for (int i = 0; i < 10; ++i) {
        cout << "Ingresa el número " << i + 1 << ": ";
        cin >> numeros[i];

        sort(numeros.begin(), numeros.begin() + i + 1);
    }

    cout << "Números ordenados: ";
    for (int i = 0; i < 10; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
