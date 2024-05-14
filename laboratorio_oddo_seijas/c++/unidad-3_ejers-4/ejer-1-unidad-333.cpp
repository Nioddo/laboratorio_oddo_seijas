#include<iostream>
using namespace std;

int main()
{
    string p1, p2;
    int largo1, largo2, n1, n2;
    char letra1, letra2;
    cout << "ingrese palabra 1: " << endl;
    cin >> p1;
    cout << "ingrese palabra 2: " << endl;
    cin >> p2;

    largo1= p1.size();
    largo2= p2.size();

    n1=largo1-1;
    n2=largo2-1;

    letra1=p1[n1];
    letra2=p2[n2];

    if(letra1==letra2)
        {
         cout << "la ultima letra es igual" << endl;
          }
         else
           {
            cout << "la ultima letra no es igual" << endl;
        }
}