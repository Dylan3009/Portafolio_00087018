#include<iostream>
#include<conio.h>
using namespace std;

int multiplicacion(int num1, int num2){
	if(num1==0||num2==0){
		return 0;
	}else if(num1==1||num2==1){
		cout << "n = " << num2 << " caso base" << endl;
		return 1;
	}else{
		multiplicacion(num1, num2-1);
		return num1+(num1*(num2-1));
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
