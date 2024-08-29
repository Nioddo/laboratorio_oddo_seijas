#include <iostream>
using namespace std;
int main(){
int num_fil,num_fil2, suma=0;
int num_col,num_col2;

//crea la primer matriz
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
// crea las trasnspuesta

int matriz_trans[num_fil2][num_col2];
    for (int f=0; f != num_fil; f++){
        for (int c=0; c != num_col; c++){
        matriz_trans[c][f]=matriz[f][c];
    }
    }
}