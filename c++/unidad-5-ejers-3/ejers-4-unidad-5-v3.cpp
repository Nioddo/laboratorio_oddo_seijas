#include<iostream>
using namespace std;


void transformacion(float cel, float &far){
        far=(cel*9/5) +32;
    }

int main (){
    float far, cel;

    cout<<"ingrese grados celcius"<< endl;
    cin>>cel;
    transformacion(cel, far);
    cout<<far<<"°F"<<endl;

}