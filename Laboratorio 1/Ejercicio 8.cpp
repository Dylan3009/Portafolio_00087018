//8,16,22,26
//Dylan Moisés Meléndez Linares 00087018
//Ejerciocio 8
#include <iostream>
using namespace std;

int Recursion2(int a, int b){
    if(b==a){   
    }else{
        cout<<b<<endl;
        Recursion2(a, b+1);
    }
}

int Recursion1(int a){
    if(a==1){
        cout<<a<<endl;    
    }else{
        cout<<a<<endl;
        Recursion1(a-1);   
    }
}

int main(){
    cout<<"Este es el ejercicio 8"<<endl;
    int a, b=1;
    
    cout<<"Ingrese un numero entero pero positivo: ";
    cin>>a;
  
    Recursion2(a, b);
    Recursion1(a);
    
    return 0;
}
