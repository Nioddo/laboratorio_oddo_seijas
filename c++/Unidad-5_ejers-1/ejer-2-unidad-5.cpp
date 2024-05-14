#include<iostream>
using namespace std;

int main(){
    float n1, n2, resultado;
    int opcion;
    cout<< "ingrese dos numeros" <<endl;
    cin>> n1;
    cin>> n2;

        cout << "Menu:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. División" << endl;
        cout << "4. Multiplicación" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;
        resultado= calculo(n1,n2,opcion);
        cout<< resultado;

}

float calculo(float num1, float num2, int op){
float rel;
        switch (op) {
            case 1:
                rel = num1 + num2;
                break;
            case 2:
                rel = num1 - num2;
                break;
            case 3:
                if (num2 != 0) {
                    rel = num1 / num2;
                } else {
                    cout << "No se puede dividir entre cero." << endl;
                }
                break;
            case 4:
                cin >> num2;
                rel = num1 * num2;
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
        }

    }

    




