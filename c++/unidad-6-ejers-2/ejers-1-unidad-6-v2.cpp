#include <iostream>
using namespace std;
void rellenar_arreglo(int lista[], int largo){
    cout << "--ingrese numeros del arreglo--" <<endl;
    for (int i = 0; i != largo; i++){
        cin>> lista[i];
    }
    
}
void pedir_largo(int &largo){
    cout<<"ingresa el largo de la lista: "<<endl;
    cin>> largo;
}
void mostrar_arreglo(int lista[], int largo){
    cout << "--mostrar arreglo--" <<endl;
    for (int i = 0; i != largo; i++){
        cout<< lista[i]<<endl;
    }
    
}

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
        cout<<"mostraos la lista sumada y ordenada: "<<endl;
        for(int i4=0; i4 != tamanio; i4++ ){
        
            cout<< arreglo[i4]<<endl;

        }
    }

int main(){
    int largo1, largo2,limit;
    pedir_largo(largo1);
    int lista1[largo1];
    rellenar_arreglo(lista1, largo1);
    mostrar_arreglo(lista1, largo1);
    
    pedir_largo(largo2);
    int lista2[largo2];
    rellenar_arreglo(lista2, largo2);
    mostrar_arreglo(lista2, largo2);

    limit=largo1+largo2;
    int lista3[limit];
        for(int i4=0; i4 !=largo1; i4++){
            lista3[i4]=lista1[i4];
        }
        for(int i5=0; i5!=largo2; i5++){
            lista3[i5+largo1]=lista2[i5];
        }
        bubble_sort(lista3, limit);
}