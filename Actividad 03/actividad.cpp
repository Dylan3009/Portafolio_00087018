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
	    }
		cout<<endl;	
	}
    
    for(int i=0; i<5; i++){
	    cout<<"\nContinente: "<<poblaciones[i].Continente<<endl;
	    for(int j=0; j<5;j++){
			cout<<"Pais: "<<poblaciones[j].Pais<<endl;
	    	cout<<"Capital del pais: "<<poblaciones[j].Capital<<endl;
	    	cout<<"Poblacion: "<<poblaciones[j].Poblacion<<endl;
		}
	    cout<<endl;
	}
	
    getch();
    return 0;
}
