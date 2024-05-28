#include <iostream>
using namespace std;

int main(){
const int tamaño = 3;
            int i2=0;
            string r1, AUX;
    string lista10[tamaño];
    cout << "--ingrese 10 palabras en el arreglo--" <<endl;
    for (int i = 0; i != tamaño; i++){
        cin>> lista10[i];
    }
    for (int i=tamaño-1 ;i != 0; i--){
        r1=lista10[i2];
        AUX=lista10[i];
        lista10[i]=r1;
        lista10[i2]=AUX;
        i2++;
    }
    cout<<"el nuevo orden es: "<<endl;
    for (int i3=0; i3 != tamaño; i3++){
        cout<< lista10[i3]<<endl;
    }
    
    }


