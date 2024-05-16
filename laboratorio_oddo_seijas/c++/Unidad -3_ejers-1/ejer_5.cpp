#include<iostream>
using namespace std;
int main(){
   float hombres;
   float mujeres;
   cout << "ingrese cantidad de hombres: " << endl;
   cin >> hombres;
   cout << "ingrese cantidad de mujeres: " << endl;
   cin >> mujeres;
   float total = hombres+mujeres;
   cout << "porcentaje de hombres:" << endl;
   float phombres = (hombres/total)*100;
   cout << phombres << endl;
    cout << "porcentaje de mujeres:" << endl;
   float pmujeres = (mujeres/total)*100;
   cout << pmujeres <<endl;
}