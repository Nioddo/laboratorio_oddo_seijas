#include <iostream>
#include <vector>
using namespace std;

void ingresar_notas(int seleccion) {
int nota;
vector <int> alumno1;
vector <int> alumno2;
vector <int> alumno3;
vector <int> alumno4;
vector <int> alumno5;

switch (seleccion)
{
case 1:
    while (nota <= 10)
    {
            if(nota >= 11){
            cin>>nota;
            alumno1.push_back(nota);
        }
    }
    break;
    
case 2:
    while (nota <= 10)
    {
            if(nota >= 11){
            cin>>nota;
            alumno2.push_back(nota);
        }
    }
    break;

case 3:
    while (nota <= 10)
    {
            if(nota >= 11){
            cin>>nota;
            alumno3.push_back(nota);
        }
    }
    break;

case 4:
    while (nota <= 10)
    {
            if(nota >= 11){
            cin>>nota;
            alumno4.push_back(nota);
        }
    }
    break;

default:
    while (nota <= 10)
    {
            if(nota >= 11){
            cin>>nota;
            alumno5.push_back(nota);
        }
    }
    break;
}
}

int main(){
    int opcion1=0, opcion2;

while(opcion1 != 5){

cout << R"(
1. Ingresar calificaciones. 
2. Mostrar promedios. 
3. Ordenar promedios. 
4. Buscar un promedio. 
5. Salir. 
)";
    cin >> opcion1;


switch (opcion1)
{
case 1:

cout << R"(
de quien quiere ingresar notas?
1. pepo. 
2. diego. 
3. valdo. 
4. elcojo. 
5. ñato. 
)";
    cin >> opcion2;
    
ingresar_notas(opcion2);
    break;
case 2:

    break;
case 3:

    break;
case 4:

    break;
default:
    break;
}

}

}
