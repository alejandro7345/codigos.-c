#include<iostream>
using namespace std;

int main() {
    int n, a=0, b=1, c;
    
    cout<<"Ingrese el número de términos a generar: "<<endl;
    cout<<"->";
    cin>>n;
    
    cout<<"Serie de Fibonacci:" << endl;
    
    cout<<a<<" ";
    
    for(int i=1; i<n;i++){
        cout<<b<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    
    return 0;
}
