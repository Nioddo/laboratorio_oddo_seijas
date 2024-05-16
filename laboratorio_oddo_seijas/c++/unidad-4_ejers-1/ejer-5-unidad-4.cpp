#include <iostream>
using namespace std;

int main(){
    string nombreusr, contraseñausr, com, contraingr, nombreingr, contraseñacom;
    cout<< "-REGISTRESE-"<<endl;
    cout<< "ingrese nombre de usuario: ";
    cin>> nombreusr;
    cout<< "ingrese contraseña: ";
    cin>> contraseñausr;

    cout<< "comfirme contraseña: ";
    cin>> contraseñacom;
        while(contraseñausr != contraseñacom)
        {
            cout<< "ERROR: LASCONTRASEÑAS NO COINCIDEN"<<endl;
            cout<< "comfirme contraseña: ";
            cin>> contraseñacom;
        }

    cout<<"-INGRESO-"<<endl;
    cout<< "ingrese nombre de usuario: ";
    cin>> nombreingr;
    cout<< "ingrese contraseña: ";
    cin>> contraingr;
    while(nombreusr!=nombreingr and contraseñacom!=contraingr)
    {
    cout<<"ERROR: contraseña o usuario no cionciden"<<endl;
    cout<< "ingrese nombre de usuario: ";
    cin>> nombreingr;
    cout<< "ingrese contraseña: ";
    cin>> contraingr;
    }

    cout<<"---BIENVENIDO---"<<endl;
    

}