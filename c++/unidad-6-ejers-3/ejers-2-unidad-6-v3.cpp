
#include <iostream>
using namespace std;
int main(){
int num_fil=2;
int num_col=2;
    cout<<"ingrese los numeros de la matriz"<<endl;
    int matriz[num_fil][num_col];
    for (int f=0; f != num_fil; f++){
        for (int c=0; c != num_col; c++){
        cin>> matriz[f][c];
    }
    }

    int matriz_nueva[num_fil][num_col];
    for (int f=0; f != num_fil; f++){
        for (int c=0; c != num_col; c++){
            matriz_nueva[f][c]=matriz[f][c];
        }
    }

    cout<<"--matriz completa--"<<endl;
    for (int f=0; f != num_fil; f++){
        for (int c=0; c != num_col; c++){
        cout<< matriz_nueva[f][c] <<endl;
}
    }
}