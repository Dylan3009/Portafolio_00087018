#include <iostream>
#include <conio.h>
using namespace std;

void calculos(int num, int *doble, int *triple){
cout<<"LA direcion de doble en la funcion: "<<doble<<endl;
	*doble=2*num;
	*triple=3*num;
}

int main(){
int numero = 2, doble = 0, triple = 0;

calculos(numero, &doble, &triple);

cout<<"El doble de 2 es: "<<doble<<endl;
cout<<"El triple de 2 es: "<<triple<<endl;
cout<<"La direccion del doble de 2: "<<&doble<<endl;
cout<<"La direccion del triple de 2: "<<&triple<<endl;

getch();
return 0;


}

