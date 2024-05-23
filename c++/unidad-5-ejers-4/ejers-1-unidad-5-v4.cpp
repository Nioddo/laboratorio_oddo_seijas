#include <iostream>
using namespace std;

int calc(int n){
    if(n==0){
        n=0;
    }
    else{
        n= n + calc(n-1);
    }
    return n;
}

int main(){
    int n;
    cout<< "ingrese numero"<<endl;
    cin >> n;
    if(n<0){
        n= n*(-1);
    }
    cout<<"el factorial de "<< n <<"! es: "<< calc(n);
}