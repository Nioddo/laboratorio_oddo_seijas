#include <iostream>
using namespace std;
void bubble_sort(int arreglo[], int tamanio)
    {
        for (int i = 0; i < tamanio - 1; i++)
        {
            for (int j = 0; j < tamanio - i - 1; j++){
                if (arreglo[j] > arreglo[j + 1])
                {
                    int temp = arreglo[j];
                    arreglo[j] = arreglo[j + 1];
                    arreglo[j + 1] = temp;
                }    
            }    
        }

        cout<<"el numero mayor de la lista es: "<<endl;
            cout<< arreglo[tamanio-1] <<endl;
        
        
    }
int main()
{
    int largo;
    cout<<"ingresa el largo de la lista"<<endl;
    cin>> largo;
    int lista[largo];
    cout << "--ingrese numeros del arreglo--" <<endl;
    for (int i = 0; i != largo; i++){
        cin>> lista[i];
    }
    bubble_sort(lista, largo);
}