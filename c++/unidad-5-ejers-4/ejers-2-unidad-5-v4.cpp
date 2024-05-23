#include <iostream>
using namespace std;

int calculo(int nb, int nex, int nr){
    if(nex==0){
        nr=1;
    }
    else{
        nr= nb*calculo(nb,nex-1,nr);
    }
    return nr;
}

int main(){
    int nb, nex, nr=0;
    cout<< "ingrese numero base: ";
    cin>> nb;
    cout<< "ingrese numero exponente: ";
    cin>> nex;

cout<<"la potencia es: "<< calculo(nb, nex, nr)<<endl;


}