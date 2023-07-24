
#include <iostream>
using namespace std;

int main(){
	
	int a,b,c,d,e,aux,i,j;
	
	cout<<"ingrese 5 numeros   ";
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>e;
	
	int numeros[]={a,b,c,d,e};
	
	for( i=0;i<5;i++){
		
		for( j=0;j<5;j++){
			
			if(numeros[j]>numeros[j+1]){
				aux=numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
				
			}
		}
		
	}
	
	for (i=0;i<5;i++){
		cout<<numeros[i];
	}
	
}
