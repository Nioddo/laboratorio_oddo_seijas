#include<iostream>
using namespace std;

string calculo( int hactual, int maactual){
    int hf=720;
    int mf=05;
    int rm, rh;
    string re2;
    hactual= hactual*60;
    rh= hf-hactual;
    rm= mf-maactual;
    if(rm<0){
        rh=rh-1;
        rm=60+rm;
    }
    rh=rh/60;
    re2= to_string(rh)+string("h")+string(":")+to_string(rm)+string("m");

return re2;

}

int main(){
    int ha, ma;
    string re;
    cout<<"ingrese hora y luego minuto actual: "<<endl;
    cin >> ha;
    cin >> ma;
    re= calculo(ha, ma);
    cout<< re << endl;
}

