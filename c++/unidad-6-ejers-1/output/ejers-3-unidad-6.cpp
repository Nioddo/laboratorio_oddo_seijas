#include <iostream>
using namespace std;

int main(){
    int largo;
    int num;
    bool re;
    cout<<"ingresa el largo de la lista"<<endl;
    cin>> largo;
    int lista[largo];
    cout << "--ingrese numeros del arreglo--" <<endl;
    for (int i = 0; i != largo; i++){
        cin>> lista[i];
    }
    cout<<"ingrese numero a buscar"<<endl;
    cin>>num;

    for(int i2 = 0; i2 != largo; i2++){
        if (lista[i2]==num){
            re=true;
        }
    }
    if(re==true){
    cout<<"!!!el num esta en la lista  :) !!!"<<endl;
    }
    else {
    cout<< "el num no esta en la lista :( "<<endl;
    }
    }