#include <iostream>
using namespace std;

int main(){
    string cadena, cadena2;
    int cont;
    cout<<"Ingrese una cadena de palabras separadas por comas: "<< endl;
    cin >> cadena;

    cont=cadena.size();

    for(int i=0; i <cont; i++){
        if(cadena[i]==","){
            cadena2+=" ";
        }
        else{
            cadena2=cadena2+cadena[i];
        }
    }
    cout<< cadena2;
}