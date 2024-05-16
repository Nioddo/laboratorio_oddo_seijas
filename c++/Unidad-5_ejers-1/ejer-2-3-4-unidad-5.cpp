#include<iostream>
using namespace std;

void menu(){
    cout << "===|Menu|===:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. División" << endl;
        cout << "4. Multiplicación" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese su opción: ";
}

float suma(float num1, float num2){
float resul;
resul=num1+num2;
return resul;
}
float resta(float num1, float num2){
float resul;
resul=num1-num2;
return resul;
}
float div(float num1,float num2){
float resul;
resul=num1/num2;
return resul;
}
float mult(float num1,float num2){
float resul;
resul= num1*num2;
return resul;
}

int main(){
    float n1, n2, rel;
    int opcion;
    cout<< "ingrese dos numeros" <<endl;
    cin>> n1;
    cin>> n2;
    menu();
    cin >> opcion;
    switch (opcion) {
            case 1:
                rel=suma(n1, n2);
                    cout<<"Su resultado es: " << rel;

                break;
            case 2:
                rel=resta(n1, n2);
                    cout<<"Su resultado es: " << rel;

                break;
            case 3:
                if (n2 != 0) {
                    rel= div(n1, n2);
                        cout<<"Su resultado es: " << rel;

                } else {
                    cout << "No se puede dividir entre cero." << endl;
                }
                break;
            case 4:
                rel= mult(n1, n2);
                    cout<<"Su resultado es: " << rel;

                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
        }
        
}

