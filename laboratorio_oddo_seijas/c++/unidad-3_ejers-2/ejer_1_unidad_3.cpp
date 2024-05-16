#include<iostream>
using namespace std;
int main(){
   float n1;
   float n2;
   cout << "ingrese numero n°1: " << endl;
   cin >> n1;
   cout << "ingrese numero n°2: " << endl;
   cin >> n2;
   if(n1>n2)
   {
    cout << n1 << endl;
   }
    else if (n1<n2)
   { 
    cout  << n2 << endl;
   }
    else 
    {
    cout << "son iguales "<< endl;
   }
}