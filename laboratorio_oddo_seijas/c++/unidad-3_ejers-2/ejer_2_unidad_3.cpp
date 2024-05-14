#include<iostream>
using namespace std;
int main(){
   float n1, n2, r1, r2, r3, r4;

   cout << "ingrese numero n°1: " << endl;
   cin >> n1;
   cout << "ingrese numero n°2: " << endl;
   cin >> n2;

   r1 = n1+n2;
   r2 = n1-n2;
   r3 = n1*n2;

   if(n2==0)
   {
    cout << "relsultado division: " << endl;
    cout << "no se puede dividir por 0" << endl;
   }
   else{
   r4 = n1/n2;
   cout << "relsultado division: " << endl;
   cout << r4 <<endl;

   }

   cout << "relsultado suma: " << endl;
   cout << r1 <<endl;
   cout << "relsultado resta: " << endl;
   cout << r2 <<endl;
   cout << "relsultado multiplicacion: " << endl;
   cout << r3 <<endl;
   
}