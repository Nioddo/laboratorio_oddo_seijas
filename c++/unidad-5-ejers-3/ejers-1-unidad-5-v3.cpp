#include<iostream>
using namespace std;

void area_circulo(float r1, float &area){
        area=3.1415926535897932*(r1*r1);
    }

int main (){
    float area, r1;
    cout<<"ingrese radio del circulo"<<endl;
    cin>>r1;
    area_circulo(r1, area);
    cout<<area<<endl;

}