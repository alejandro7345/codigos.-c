#include <iostream>
using namespace std;
int main() {
	
    int totalSeg, h, m, seg;

   
   cout << "Ingrese el numero total de segundos: ";
   cin >> totalSeg;

   
    h = totalSeg / 3600;           
    totalSeg = totalSeg% 3600;   
    m = totalSeg / 60;          
    seg = totalSeg % 60;           

   
   cout << "Horas: " << h << endl;
  cout << "Minutos: " << m<< endl;
   cout << "Segundos: " << seg <<endl;

    return 0;
}

