#include<iostream>
using namespace std;

void area_circulo(string l1, string &letra1){
    int n1;
    
    n1=l1.size();

    while(n1 >0)
    {
    n1=n1-1;
    letra1+=l1[n1];
    }
    }

int main (){
    string l1, letra1;

    cout<<"ingrese palabra: "<<endl;
    cin>>l1;

    area_circulo(l1, letra1);
    cout<<"la palabra al reves es:"<< letra1 <<endl;

}