#include <iostream>
using namespace std;

int main(){
    const int tamaño = 5;
    int r1,r2=0;
    int lista5[tamaño];
    cout << "--ingrese 5 datos en el arreglo--" <<endl;
    for (int i = 0; i != tamaño; i++){
        cin>> lista5[i];
    }

    for (int i = 0; i != tamaño; i++){
        r1=lista5[i];
        r2=r1+r2;
    }
    cout<<"la suma de todos los datos del arreglo es: "<<r2<<endl;
} 