#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
# include "iostream"
using namespace std;

int main()
{
	int lanzamonedas();
	int lanzadados();
    cout<<"Lanza Monedas: 1"<< "\n";
    cout<<"Lanza Dados: 2"<< "\n" << "\n";
    
    cout << "Ingrese la Opcion a ejecutar: ";
    int opcion = 0;
    cin >> opcion;

    switch(opcion)
{
        case 1: lanzamonedas();
        break;
        case 2: lanzadados();
        break;
        default: cout << "Usted ha ingresado una opción incorrecta";
}


    return 0;
}



int lanzamonedas()
{
    int r,c,e ;
 srand (time(NULL));
 
for(int i=0;i<=8;i+=1)
{
   r=rand() % 2;
   if(r == 1)
{
    c=c+1;
}
else
{
   e=e+1;
}  
}
 cout << "Los numeros de veces que callo cara es: " <<c << "\n";  
 cout << "Los numeros de veces que callo escudo es: " <<e << "\n";
 return 0;
}

int lanzadados()
{
    int d6,r,s ;
 srand (time(NULL));
 
 
 while(d6 <= 9)
{
    r=rand() % 7;
       if(r == 6)
{
    d6=d6+1;
}
else
{
   s=s+r;
}
}
 
 cout << "Las veces que salieron 6 son: " <<d6 << "\n";  
 cout << "La suma total de todos los intentos es: " <<s << "\n";
 return 0;
}
