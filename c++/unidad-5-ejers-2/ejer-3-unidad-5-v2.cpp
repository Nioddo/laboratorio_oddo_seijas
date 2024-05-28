#include<iostream>
using namespace std;
void cambio (string &l1, char l2){
l1=l1+l2;
}
int main(){
    string l1;
    char l2;
    cout<<"ingrese palabra: "<<endl;
    cin>>l1;
    cout<<"ingrese letra: "<<endl;
    cin>>l2;
    cambio(l1, l2);
    cout<<"palabra + letra: : "<< l1 <<endl;
}