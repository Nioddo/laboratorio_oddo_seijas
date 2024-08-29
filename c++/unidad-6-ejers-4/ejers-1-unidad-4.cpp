#include <iostream>
#include <vector>
using namespace std;
int main(){
    int largo_vector, nums;
    cout<<"ingrese el largo del vector"<<endl;
    cin>>largo_vector;
    vector <int> numeros;
    cout<<"ingrese "<< largo_vector <<" datos:"<<endl;

    for(int i=0; i!= largo_vector; i++){
        cin >> nums;
        numeros.push_back(nums);
    }
    cout<<"mostrar el vector: "<<endl;
    for(int i2=0; i2!=largo_vector; i2++){
    cout<< numeros[i2] <<endl;
    }

}