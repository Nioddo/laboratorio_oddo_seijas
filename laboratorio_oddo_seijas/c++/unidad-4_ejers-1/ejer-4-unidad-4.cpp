#include<iostream>
using namespace std;
int main(){
    string palabra, palabra_aux;
    int n, largo, indice;

    cout << "Ingresar una palabra: " << endl;
    cin >> palabra;

    cout << "Ingrese la cantidad de caracteres a desplazar: " << endl;
    cin >> n;

    largo = palabra.size();
    indice = largo - n;

    while (indice < largo){
        palabra_aux += palabra[indice];
        indice ++;
    }

    for(int i = 0; i < largo - n; i++){
        palabra_aux += palabra[i];
    }

    cout << "La palabra era: " << palabra << endl;
    cout << "Y ahora la palabra es: " << palabra_aux << endl;
}