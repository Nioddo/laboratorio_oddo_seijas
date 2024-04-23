#include<iostream>
using namespace std;

int main(){
float n1,n2,n3, rel1, rel2;
int seleccion;

cout<<"ingrese numero 1: ";
cin>>n1;
cout<<"ingrese numero 2: ";
cin>>n2;
cout<<"ingrese numero 3: ";
cin>>n3;
seleccion=0;

while(seleccion < 1 or seleccion > 2){
    cout<<"ingrese uno para la opcion 1 (sumar todos los numeros)"<<endl;
    cout<<"ingrese dos para la opcion 2 (sacar promedio de los 3 numeros)"<<endl;
    cin>>seleccion;
}
if(seleccion==1){
    rel1=n1+n2+n3;
    cout<<"el resultado de la suma de los 3 numeros es: "<< rel1<<endl;
}
else{
    rel2=(n1+n2+n3)/3;
    cout<<"el resultado del promedio de los 3 numeros es: "<< rel2<<endl;
}


    
}