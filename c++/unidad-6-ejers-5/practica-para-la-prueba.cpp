#include <iostream>
#include <vector>
using namespace std;

int busqueda_promedios(const vector<float>& promedios, bool &confirmacion) {
    if (confirmacion) {
        float valor_buscado;
        int izquierda = 0;
        int derecha = promedios.size() - 1;

        cout << "Ingrese el promedio a buscar: ";
        cin >> valor_buscado;

        while (izquierda <= derecha) {
            int medio = izquierda + (derecha - izquierda) / 2;

            // Verificamos si el valor_buscado está en el medio
            if (promedios[medio] == valor_buscado)
                return medio;  // Encontrado, retornamos el índice

            // Si el valor_buscado es mayor, ignoramos la mitad izquierda
            if (promedios[medio] < valor_buscado)
                izquierda = medio + 1;
            // Si el valor_buscado es menor, ignoramos la mitad derecha
            else
                derecha = medio - 1;
        }

        // Si no encontramos el valor, retornamos -1
        return -1;
    } else {
        cout << "Los promedios no han sido ordenados. Ordene los promedios antes de buscar." << endl;
        return -1;
    }
}

void ordenar_promedios(vector<float>& promedios, bool &confirmacion) {
    if (!promedios.empty()) {
        int tamaño = promedios.size();
        confirmacion=true;
        for (int i = 0; i < tamaño - 1; i++) {
            for (int j = 0; j < tamaño - i - 1; j++) {
                if (promedios[j] > promedios[j + 1]) {
                    // Intercambio de elementos
                    float temp = promedios[j];
                    promedios[j] = promedios[j + 1];
                    promedios[j + 1] = temp;
                }
            }
        }

        // Imprimir los promedios ordenados
        for (int i = 0; i < promedios.size(); i++) {
            cout << promedios[i] << endl;
        }
    } else {
        cout << "No hay promedios todavía: abra primero la opción mostrar promedios." << endl;
    }
}

void mostrar_promedios(vector<float>& alumno1, vector<float>& alumno2, vector<float>& alumno3, vector<float>& alumno4, vector<float>& alumno5, vector<float>& promedios) {
    float notas = 0, promedio = 0;
// alumno 1
    for (int i = 0; i < alumno1.size(); i++) {
        notas=notas+alumno1[i];
    }
    if (alumno1.empty() != 1) {
        promedio = notas / alumno1.size();
        promedios.push_back(promedio);
        cout << "Promedio de alumno1: " << promedio << endl;
    } else {
        cout << "Alumno no tiene calificaciones." << endl;
    }

    // Alumno 2
    notas = 0;
    for (int i = 0; i < alumno2.size(); i++) {
        notas=notas+alumno2[i];
    }
    if (alumno2.empty() != 1) {
        promedio = notas / alumno2.size();
        promedios.push_back(promedio);
        cout << "Promedio de alumno2: " << promedio << endl;
    } else {
        cout << "Alumno no tiene calificaciones." << endl;
    }

    // Alumno 3
    notas = 0;
    for (int i = 0; i < alumno3.size(); i++) {
        notas=notas+alumno3[i];
    }
    if (alumno3.empty() != 1) {
        promedio = notas / alumno3.size();
        promedios.push_back(promedio);
        cout << "Promedio de alumno3: " << promedio << endl;
    } else {
        cout << "Alumno no tiene calificaciones." << endl;
    }

    // Alumno 4
    notas = 0;
    for (int i = 0; i < alumno4.size(); i++) {
        notas=notas+alumno4[i];
    }
    if (alumno4.empty() != 1) {
        promedio = notas / alumno4.size();
        promedios.push_back(promedio);
        cout << "Promedio de alumno4: " << promedio << endl;
    } else {
        cout << "Alumno no tiene calificaciones." << endl;
    }

    // Alumno 5
    notas = 0;
    for (int i = 0; i < alumno5.size(); i++) {
        notas=notas+alumno5[i];
    }
    if (alumno5.empty() != 1) {
        promedio = notas / alumno5.size();
        promedios.push_back(promedio);
        cout << "Promedio de alumno5: " << promedio << endl;
    } else {
        cout << "Alumno no tiene calificaciones." << endl;
    }
}

void agregador_notas(vector<float>& alumno) {
    float nota = 0;
    cout << "Ingrese las notas que quiera, si quiere dejar de poner notas ingrese un numero mayor a 10" << endl;
    
    while (nota < 10) {
        cin >> nota;
        if (nota < 11 and nota > 0) {  // Si la nota es mayor a 10, salimos del bucle
        alumno.push_back(nota);  // Si la nota es válida, se agrega al vector
        }
    }
}

void ingresar_calificaciones(vector<float>& alumno1, vector<float>& alumno2, vector<float>& alumno3, vector<float>& alumno4, vector<float>& alumno5) {
    int opcion2 = 0;
    
    while (opcion2 != 6) {
        cout << R"(
            1. alumno1
            2. alumno2
            3. alumno3
            4. alumno4
            5. alumno5
            6. volver al menu
        )";
        cin >> opcion2;

        switch(opcion2) {
            case 1:
                agregador_notas(alumno1);
                break;
            case 2:
                agregador_notas(alumno2);
                break;
            case 3:
                agregador_notas(alumno3);
                break;
            case 4:
                agregador_notas(alumno4);
                break;
            case 5:
                agregador_notas(alumno5); 
                break;
            case 6:
                cout << "volviendo al menu." << endl;
                return;
            default:
                cout << "Opción no válida." << endl;
                break;
        }
    }
}

int main() {
    bool confirmacion= false;
    int opcion1 = 0;
    vector<float> alumno1;
    vector<float> alumno2;
    vector<float> alumno3;
    vector<float> alumno4;
    vector<float> alumno5;
    vector<float> promedios;

    while(opcion1 != 5) {
        cout << R"(
            1. ingresar calificaciones
            2. mostrar promedios
            3. ordenar promedios
            4. buscar promedio
            5. salir
        )";
        cin >> opcion1;
        
        switch(opcion1) {
            case 1:
                ingresar_calificaciones(alumno1, alumno2, alumno3, alumno4, alumno5);
                break;
            case 2:
                mostrar_promedios(alumno1, alumno2, alumno3, alumno4, alumno5, promedios);
                break;
            case 3:

                ordenar_promedios(promedios, confirmacion);
                break;
            case 4:
                busqueda_promedios(promedios, confirmacion);
                break;
            case 5:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida." << endl;
                break;
        }
    }
}
