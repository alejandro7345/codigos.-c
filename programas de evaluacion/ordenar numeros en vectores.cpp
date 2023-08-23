#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

vector<int> generarVectorAleatorio(int n, int inicio, int fin) {
    vector<int> vectorAleatorio(n);
    srand(time(NULL));
    
    for(int i = 0; i < n; i++) {
        vectorAleatorio[i] = inicio + rand() % (fin - inicio + 1);
    }
    
    return vectorAleatorio;
}

void imprimirVector(const vector<int>& vec) {
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    int dimensionA, dimensionB;
    
    cout << "Ingrese la dimension del primer vector: ";
    cin >> dimensionA;
    
    cout << "Ingrese la dimension del segundo vector: ";
    cin >> dimensionB;
    
    vector<int> vectorA = generarVectorAleatorio(dimensionA, 1, 50);
    vector<int> vectorB = generarVectorAleatorio(dimensionB, 51, 100);
    
    cout << "Vector A generado: ";
    imprimirVector(vectorA);
    
    cout << "Vector B generado: ";
    imprimirVector(vectorB);
    
    vector<int> vectorOrdenado(dimensionA + dimensionB);
    copy(vectorA.begin(), vectorA.end(), vectorOrdenado.begin());
    copy(vectorB.begin(), vectorB.end(), vectorOrdenado.begin() + dimensionA);
    
    sort(vectorOrdenado.begin(), vectorOrdenado.end());
    
    cout << "Vector ordenado: ";
    imprimirVector(vectorOrdenado);
    
    return 0;
}
