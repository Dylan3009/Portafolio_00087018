//8,16,22,26
//Dylan Moisés Meléndez Linares 00087018
//Ejercicio 16
#include <iostream>
using namespace std;

int main() {
    int numero[10];
    int suma=0;
    int promedio = 0;
    cout<<"Este es el ejercicio 16"<<endl;
    for(int i=0; i<10; i++){
    
        cout<<"Digite 10 numeros enteros: ";
        cin>>numero[i];
        
        suma += numero[i];
    }
    
    promedio = suma/10;
    
    cout<<"\nLa sumatoria es: "<<suma<<endl;
    cout<<"El promedio de la sumatoria es: "<<promedio;
   
    return 0;
}
