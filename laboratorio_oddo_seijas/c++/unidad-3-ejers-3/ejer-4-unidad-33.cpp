#include<iostream>
using namespace std;

int main()
{
   char n1;

   cout << "ingrese letra: " << endl;
   cin >> n1;

   if((int)n1 >= 65 and (int)n1 <= 90 ) 
    {
    cout << "es MAYUSCULA"  << endl;
    }

    else
    {
    cout << "es minuscula"  << endl; 
    }
}