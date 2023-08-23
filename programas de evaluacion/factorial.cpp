#include <iostream>

using namespace std;

int main(){
    
    int n, factorial=1;
    
    cout<<"Ingrese el numero al que desea calcular el factorial:"<<endl;
    cout<<"->";
    cin>>n;
    
    if(n<0){
        cout<<"Solo se puede calcular el factorial de numeros enteros positivos."<<endl;
    }
    else{
        for(int i=1; i<=n; i++){
            factorial*=i;
        }
    }
    
    cout<<"El factorial de "<<n<<" es:"<< factorial<<endl;

    return 0;
}
