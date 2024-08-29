#include <iostream>
using namespace std;
int main(){
int num_fil;
int num_col;
    cout<<"ingresar numero de columnas"<<endl;
    cin>> num_col;
    cout<<"ingresar numero de filas"<<endl;
    cin>> num_fil;

    cout<<"ingresar numero de matriz"<<endl;
    int matriz[num_fil][num_col];
    for (int f=0; f != num_fil; f++){
        for (int c=0; c != num_col; c++){
        cin>> matriz[f][c];
    }
    }
    cout<<"--matriz completa--"<<endl;
    for (int f=0; f != num_fil; f++){
        for (int c=0; c != num_col; c++){
        cout<< matriz[f][c] <<endl;
}
    }
}