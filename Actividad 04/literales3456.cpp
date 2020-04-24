//Dylan Moises Melendez Linares 00087018
#include<iostream>
#include<conio.h>
using namespace std;

struct Poblacion{
	char Continente[30];
	char Pais[30];
	char Capital[30];
	int Poblacion;	
	}poblaciones[5];
	
int main(){
	int mayor=0, capmay=0, suma=0;
	
    for(int i=0; i<5; i++){
    	fflush(stdin);
    	cout<<"Digite un continente: ";
    	cin.getline(poblaciones[i].Continente,30,'\n');
    	for(int j=0; j<5; j++){
    		fflush(stdin);
    	    cout<<"Digite un pais de ese continente: ";
    	    cin.getline(poblaciones[j].Pais,30,'\n');
    	    cout<<"Digite la capital de ese pais: ";
    	    cin.getline(poblaciones[j].Capital,30,'\n');
    	    cout<<"Digite la poblacion de la capital: ";
    	    cin>>poblaciones[j].Poblacion;
			cout<<endl;
			//suma += poblaciones[j].Poblacion;
			if(poblaciones[j].Poblacion > mayor){
	    		mayor = poblaciones[j].Poblacion;
	    		capmay = j; 
			}	
		}
		cout<<endl;	
	}
	
	cout<<"\n .:Datos de la mayor poblacion:. \n"<<endl;
    cout<<"Capital: "<<poblaciones[capmay].Capital<<endl;
	cout<<"Con una poblacion de: "<<poblaciones[capmay].Poblacion<<endl;
	
	cout<<"La Suma de la poblacion del Continente con mas poblacion es de: "<<poblaciones[suma].Poblacion;
	
    getch();
    return 0;
}
