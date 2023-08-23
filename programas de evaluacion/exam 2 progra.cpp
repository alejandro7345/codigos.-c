#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include<cstdlib>
#include<sstream>

using namespace std;

int main(){
    
    int n=0, k=1, i, hp, j, prim=1;
    string cad;
    int v[n];
    string convertirtexto(float f);
    srand(time(NULL));
    
    while(n<=0){
        cout<<"Ingrese la dimension del vector: "<<endl;
        cin>>n;
        cout<<endl;
        if(n<=0){
         cout<<"El vector debe tener una dimension minima de 1 "<<endl;
         cout<<endl;
        }
    }
    
    while(k<=1){
        cout<<"Desde 1 a que numero debe contener "<<endl;
        cin>>k;
        cout<<endl;
        if(k<=1){
            cout<<"Ingrese un numero mayor a 1 "<<endl;
        }
    }
    
    for(i<=1; i=n; i++){
        v[i]=1+rand()%k;
        
        for(j=2; j<=(sqrt(v[i])); j++){
            if((v[i]%j==0)){
                prim=0;
            }
        }
    }if((i==n)){
        cad=cad+convertirtexto(v[i])+".";
    }else{
        cad=cad+convertirtexto(v[i])+",";
    }
    hp=hp+prim;
    
    cout<<"Estos son los valores que se almacenaron en el vector de 1 a " <<n<<":"<<endl;
    cout<<cad<<endl;
    cout<<"valores primmos"<<hp<<endl;
   
}
