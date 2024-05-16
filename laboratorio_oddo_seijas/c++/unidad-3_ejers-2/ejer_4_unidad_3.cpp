#include<iostream>
using namespace std;
int main(){ 
    float cdt_libros, descuento , nodescuento;

    cout << "ingrese cantidad de libros:  " << endl;
    cin >> cdt_libros; 
    
if(cdt_libros<1)
{
    cout << "no se peude ingresar un numero negativo" << endl;
}
else
{
   if(cdt_libros>=5){
    descuento = cdt_libros*250;
    cout << "precio con descuento: " << endl;
    cout << descuento << endl;
   }
   else
{
    nodescuento = cdt_libros*300;
    cout << "precio sin descuento: " << endl;
    cout << nodescuento << endl;
}
}
}