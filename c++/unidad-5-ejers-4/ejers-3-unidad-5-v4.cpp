#include <iostream>
using namespace std;

int numero(int pos) {
//caso 
if (pos==0){
pos=0;
}
else if(pos==1){
pos=1;
}
// caso general
else{ 
    pos=numero (pos-1) +numero (pos-2);
}
return pos;
}

int main(){
int p1;
cout<<"ingrese una posición de la secuencia de Fibonacci: ";
cin>>p1;
cout<<numero (p1) <<endl;

}