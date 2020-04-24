#include <iostream>
#include <conio.h>
using namespace std;

float Mediana(int a[], int tamano){
	float suma=0;
	for(int i=0; i<tamano; i++){
		
		suma += a[i];
	}
	
	return suma/tamano;
}

int main(){
	
	int a[]={1,2,3,4,5,6,7,8,9};
	int tam=9;
	
	cout<<"El numero mediano es: "<<Mediana(a,tam);
	
	getch();
	return 0;
	
}
