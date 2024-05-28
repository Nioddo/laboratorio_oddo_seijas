#include<iostream>
using namespace std;
void cambio (int &n1, int &n2){
int num_aux;
num_aux=n2;
n2=n1;
n1=num_aux;
}
int main(){
    int n1, n2;
    cout<<"ingrese primer numero"<<endl;
    cin>>n1;
    cout<<"ingrese segundo numero"<<endl;
    cin>>n2;
    cambio(n1, n2);
    cout<<"numero 1 intercambiado: "<< n1 <<endl;
    cout<<"numero 2 intercambiado: "<< n2 <<endl;
    

}