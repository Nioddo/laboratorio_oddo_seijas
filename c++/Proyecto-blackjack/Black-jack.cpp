#include <iostream>
#include <random>
#include <vector>
#include <ctime>
using namespace std;
void num_rand(int &fila_rand, int &colum_rand){
    // Función que genera dos números aleatorios únicos, uno del 0 al 3 y otro del 0 al 12
    static bool numerosUtilizados[4][13] = {false};// Matriz para mantener un registro de los números utilizados
    random_device rd;  // Semilla para el generador
    mt19937 gen(rd()); // Generador de números aleatorios
    uniform_int_distribution<> dis1(0, 3); // Números aleatorios entre 1 y 3
    uniform_int_distribution<> dis2(0, 12);// Genera un número aleatorio en el rango de 0 a 12

    do{
    fila_rand = dis1(gen);
    colum_rand = dis2(gen);
    } while (numerosUtilizados[fila_rand][colum_rand]);// Comprueba si los números generados ya han sido utilizados
    numerosUtilizados[fila_rand][colum_rand] = true; // Marca los números generados como utilizados
}


void verificar_ASS(int &mano, int &carta){
    if(mano>=11 and carta==11){
        mano=mano-10;
    }
}

void dar_carta(int &mano,  int selec_cartas[4][13], string selec_cartas_visual[4][13], string &carta_visual,int &fila, int &columna, int &carta, vector<string>& vector_cartas){
        num_rand(fila, columna);
        carta=selec_cartas[fila][columna];
        verificar_ASS(mano, carta);
        mano=mano+carta;
        carta_visual=selec_cartas_visual[fila][columna];
        vector_cartas.push_back(carta_visual);
        
}

void mostrar_mazo(vector<string>& vector_cartas){
for(int i=0; i!= vector_cartas.size(); i++){
    cout<< vector_cartas.at(i);
}
}

int main() {
    int fila, columna, mano_jugador=0, mano_deler=0, opcion=1, carta_deler=0,carta_jugador=0;
    string carta_visual;
    vector <string> cartas_del_jugador;
    vector <string> cartas_del_deler;

    num_rand(fila, columna);
    int selec_cartas[4][13]={{2,3,4,5,6,7,8,9,10,10,10,10,11},{2,3,4,5,6,7,8,9,10,10,10,10,11},{2,3,4,5,6,7,8,9,10,10,10,10,11},{2,3,4,5,6,7,8,9,10,10,10,10,11}};
    string selec_cartas_visual[4][13]={{"|2♥|","|3♥|","|4♥|","|5♥|","|6♥|","|7♥|","|8♥|","|9♥|","|10♥|","|J♥|","|K♥|","|Q♥|","|A♥|"},{"|2♦|","|3♦|","|4♦|","|5♦|","|6♦|","|7♦|","|8♦|","|9♦|","|10♦|","|J♦|","|K♦|","|Q♦|","|A♦|"},{"|2♣|","|3♣|","|4♣|","|5♣|","|6♣|","|7♣|","|8♣|","|9♣|","|10♣|","|J♣|","|K♣|","|Q♣|","|A♣|"},{"|2♠|","|3♠|","|4♠|","|5♠|","|6♠|","|7♠|","|8♠|","|9♠|","|10♠|","|J♠|","|K♠|","|Q♠|","|A♠|"}};

    // primer jugada |2 cartas para el jugador| |1 para el deler|
    //mano del deler
        cout<<"mano del deler: ";
        dar_carta(mano_deler, selec_cartas, selec_cartas_visual, carta_visual, fila, columna, carta_deler, cartas_del_deler);
        mostrar_mazo(cartas_del_deler);
        cout<<"|?| = "<<mano_deler<<endl;


    //mano jugador
    cout<< "sus cartas son: ";
    for(int i=0; i!=2; i++){
        dar_carta(mano_jugador, selec_cartas, selec_cartas_visual, carta_visual, fila, columna, carta_jugador, cartas_del_jugador);
    }
    mostrar_mazo(cartas_del_jugador);
    cout<<" = "<<mano_jugador<<endl;



    //primer if para comprobar si sacamos blackjack en la primer ronda
    while(opcion==1){

        if(mano_jugador==21){
            opcion=2;
        }
        else{
            opcion=0;
            cout<<"--Elija una opcion--"<<endl;
            while(opcion !=1 and opcion !=2){ //no te deja elejir ua opcion que no sea 1 o 2
                cout<<"1°-pedir o 2°-quedarse: ";
                cin>> opcion;
            }
        }

        if(opcion==1){
        cout<< "sus cartas son: ";
        dar_carta(mano_jugador, selec_cartas, selec_cartas_visual, carta_visual, fila, columna, carta_jugador, cartas_del_jugador);
        mostrar_mazo(cartas_del_jugador);
        cout<<" = "<<mano_jugador<<endl;
        }
        if(mano_jugador>21){
            opcion=3;
        }
    } // termina el primer while
if(opcion != 3){
cout<<"dealer en juego...."<<endl;
        if(opcion==2){
        cout<<"mano del deler: ";
        dar_carta(mano_deler, selec_cartas, selec_cartas_visual, carta_visual, fila, columna, carta_deler, cartas_del_deler);
        mostrar_mazo(cartas_del_deler);
        cout<<" = "<<mano_deler<<endl;

        while(mano_deler<=16){
        cout<<"mano del deler: ";
        dar_carta(mano_deler, selec_cartas, selec_cartas_visual, carta_visual, fila, columna, carta_deler, cartas_del_deler);
        mostrar_mazo(cartas_del_deler);
        cout<<" = "<<mano_deler<<endl;
        if(mano_deler>21){
            opcion=4;
        }
        }
    }
}
if(opcion==4){
    mano_deler=0;
}
if(opcion==3){
    mano_deler+=mano_jugador;
}

        if(mano_jugador>mano_deler ){
        cout<<"¡Felicidades usted gano ＼(^o^)／!"<<endl;
        }
        else if(mano_deler==mano_jugador){
        cout<<"¡haz empatado"<<endl;
        }
        else{
        cout<<"¡haz perdido!"<<endl;
        }
        
}

