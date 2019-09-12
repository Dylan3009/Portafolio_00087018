#include<iostream>
#include<conio.h>
using namespace std;

int multiplicacion(int num1, int num2){
	if(num1==1||num2==1){
		cout << "n = " << num2 << " caso base" << endl;
		return 1;
	}else{
		int a = num1;
		int b = num1*(num2-1);
		cout << "n=" << num1 << " a=" << a <<" b=" << b << endl;
		return a+b;	
	}
}

int main(){
	int resultado, numero1, numero2;
	
	cout<<"Digite el multiplicando: "; cin>>numero1;
	cout<<"Digite el multiplicador: "; cin>>numero2;
	
	resultado = multiplicacion(numero1, numero2);
	
	cout<<"\n\nEl resultado es: "<<resultado;
	
	
	getch();
	return 0;
}
