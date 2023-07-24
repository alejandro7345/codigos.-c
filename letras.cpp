 
 #include <iostream>
 using namespace std;
 
 int main(){
 
 
 char letra;
 
 cout<<"ingrese una letra"<<endl;
 cin>>letra;
 
 if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout <<"la letra ingresada es vocal";
        
    } 
	
	else {
        cout<<"la letra ingresada es consonante";
    }
    
    
return 0;
}
