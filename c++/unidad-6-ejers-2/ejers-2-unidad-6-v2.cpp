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

        cout<<"--arreglo x2 y ordenado de mayor a menor--"<<endl;
        for (int i2 = 0; i2 != tamanio; i2++)
        {
            cout<< arreglo[i2] <<endl;
        }
        
    }
int main()
{
    int largo = 5;
    int lista[largo];
    cout << "--ingrese 5 numeros del arreglo--" << endl;
    for (int i = 0; i != largo; i++)
    {
        cin >> lista[i];
    }
    int listax2[largo];
    for (int i2 = 0; i2 != largo; i2++)
    {
        listax2[i2] = lista[i2] * 2;
    }
    bubble_sort(listax2, largo);
}