
#include<iostream>
 
using namespace std;
 
int main(){
    string palabra;
    string vocales = "aeiouAEIOU";
 
    cout<<"ingrese la primera palabra: "<<endl;
    cin>>palabra;

    int cuantas_vocales = -1;
    int cont1=palabra.size();
    int cont2=vocales.size();

    while (cont1 >= 0) {
        cont1 = cont1-1;
        cont2 = vocales.size();
        while (cont2>=0){
            cont2 = cont2 - 1;
            if (palabra[cont1] == vocales[cont2]){
                cuantas_vocales = cuantas_vocales +1
            ;
            }
       
        }
 

        
 
 
    }
    cout<<cuantas_vocales<<endl;
}
 