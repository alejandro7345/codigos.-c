#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<algorithm>

using namespace std;

void generarvector(vector<int> & vectoraleatorio){
    
    srand(time(NULL));
    
    for (int i=0; i<10; i++){
        vectoraleatorio[i]= 1+rand()%50;
    }
    
    cout<<"El vector generado es: "<<endl;
    for(int i=0; i<10; i++){
        cout<<vectoraleatorio[i]<<" ";
    }
}

void ordenar(vector<int> & vectoraleatorio){
    sort(vectoraleatorio.begin(),vectoraleatorio.end());
}

void determinarmatorymenor(vector<int> & vectoraleatorio){
    int max= *max_element(vectoraleatorio.begin(), vectoraleatorio.end());
    int min= *min_element(vectoraleatorio.begin(), vectoraleatorio.end());
    
    cout<<endl;
    cout<<"El numero maximo es: "<<max<<endl;
    cout<<endl;
    cout<<"El numero minimo es:"<<min<<endl;
}

float calcularpromedio(vector<int> & vectoraleatorio){
    
    float suma=0;
    
    for(int i=0; i< vectoraleatorio.size(); i++){
        suma+=vectoraleatorio[i];
    }
    
    float promedio= suma/vectoraleatorio.size();
    
    return promedio;
}

int main(){
    
    vector<int> vectoraleatorio(10);
    
    generarvector(vectoraleatorio);
    ordenar(vectoraleatorio);
    cout<<endl<<endl;
    
    cout<<"El vector ordenado es:"<<endl;
    for(int i=0; i<10; i++){
        cout<<vectoraleatorio[i]<<" ";
    }
    
    cout<<endl;
    determinarmatorymenor(vectoraleatorio);
    
    cout<<endl;
    float promedio=calcularpromedio(vectoraleatorio);
    cout<<"El promedio es:"<<promedio<<endl;
    return 0;
}
