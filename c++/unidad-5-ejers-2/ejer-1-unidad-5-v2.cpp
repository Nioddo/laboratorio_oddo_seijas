#include<iostream>
using namespace std;

void multiplicacion (int &num){
    num=num*2;
}
int main (){
int num; 
cout<<"ingrese numero"<<endl;
cin>>num;
cout<< "el numero main es "<<num<<endl;
multiplicacion(num);
cout<< "el numero es "<< num <<endl;
}