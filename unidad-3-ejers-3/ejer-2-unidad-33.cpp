#include<iostream>
using namespace std;

int main()
{
 float n1;

   cout << "ingrese numero n°1: " << endl;
   cin >> n1;

   if(n1 >= 0 and n1 <= 10 and n1 !=5) 
    {
    cout << " el numero  se ecncuentra entre 0 y 10 y no vale 5"  << endl;
    }

    else
    {
    cout << " el numero no se ecncuentra entre 0 y 10 o vale 5"  << endl; 
    }
}

