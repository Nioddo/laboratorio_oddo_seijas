#include<iostream>
using namespace std;

int main()
{
   string p1, p2;
    int n1;
    char letra1;
    cout << "ingrese palabra 1: " << endl;
    cin >> p1;
   
    n1= p1.size();
    
    while(n1 >0)
    {
    n1=n1-1;
    letra1=p1[n1];
    cout << letra1;
    }


}