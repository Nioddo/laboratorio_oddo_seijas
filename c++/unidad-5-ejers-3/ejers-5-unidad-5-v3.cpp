#include <iostream>
using namespace std;

bool es_primo(int n){
int cantidad=0, div=1;
while (div<=n)
{
    if (n%div==0)
    {
        cantidad=cantidad + 1;
    }
    
        div++;

}

    if (cantidad == 2){
    return true;  
    }

        else{
        return false;
        }
}
int main(){
int n;
cout<< "ingrese numero positivo" << endl;
cin >> n;
    if(es_primo(n)){
        cout<<"es primo"<<endl;
    }
        else{
            cout<<"no es primo"<<endl;
        }
}