#include<iostream>
using namespace std;
int main(){
   int n1, r1, e2;
   e2= 2;
   cout << "ingrese numero n°1: " << endl;
   cin >> n1;
   r1= n1 % e2;

   if(r1 == 0){
   cout << "es par"<< endl;
   }
   else
   {
   cout << "es inpar"<< endl;
   }
}