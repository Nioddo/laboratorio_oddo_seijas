#include<iostream>
using namespace std;

int main()
{
   string p1, palabra1;
    int n1;

    cout << "ingrese palabra 1: " << endl;
    cin >> p1;
   
    n1= p1.size();
    
    while(n1 >0)
    {
    n1=n1-1;
    palabra1+=p1[n1];
    
    }

    if(p1==palabra1)
    {
    cout<<"se lee igual de reves y alreves"<< endl;
    }

    else
    {
    cout<<" no se lee igual"<<endl;
    }
    }