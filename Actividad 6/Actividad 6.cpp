#include <iostream>
#include <conio.h>
using namespace std;

int arreglo[]= {1,3,4,5,17,18,31,33};

int Recibir(int x,int low,int high){
	if(low>high){
	return -1;
	}
	int mid=(low+high)/2;
	if(x==arreglo[mid]){
	return mid;
	}
	if(x<arreglo[mid]){
	return Recibir(x,low,mid-1);
	}else{
	return Recibir(x,mid+1,high);
	}
}

int main(){
int x=0;
int low = 0;
int high =7;
int i=0;

cout<<"Digite un numero: ";
cin>>x;

i = Recibir(x,low,high);

if(i==-1){
    cout<<"El elemento no se encontro"<<endl;
	}else{
    cout<<"El elemento se encuentra en la casilla: "<<i<<endl;
	}
    
	getch();
    return 0;
}
