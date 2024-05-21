#include<iostream>
using namespace std;

void area_circulo(string l1, int &n1 ){
    n1=l1.size();
    }

int main (){
    string l1;
    int n1;

    cout<<"ingrese palabra: "<<endl;
    cin>>l1;

    area_circulo(l1, n1);
    cout<<"el numero de letras en la palabraes:"<< n1 <<endl;

}