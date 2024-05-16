#include<iostream>
using namespace std;

int main(){
int n, n1,n2;
n=0;
while(n<1){
cout<<"ingrese numeros natural: "<<endl;
cin >> n;
}

n2=n;
n1=0;

for(int i =0; i != n; i++){
if(n2%2!=0){
n1=n1+n2;
n2=n2-1;
}

else{
 n2=n2-1;   
}
}

cout<< n1 <<endl;
}