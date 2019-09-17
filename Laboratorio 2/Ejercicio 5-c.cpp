#include <stdio.h>
#include <conio.h>
	 
	void hanoi(int n,int com, int aux, int fin);
	 
	int main(void){
	 
	       int clrscr();
		char com='Torre A';
		char aux='Torre B';
		char fin='Torre C';
		int n;
	 
		printf("\nN�mero de discos: ");
		scanf("%d",&n);
		fflush(stdin);
	 
		printf("\n\nLos movimientos a realizar son: \n");
		hanoi(n,com,aux,fin);
	}
	 
	void hanoi(int n,int com, int aux, int fin){
	 
		if(n==1){
			printf("%c->%c",com,fin);
		}
		else{
			hanoi(n-1,com,fin,aux);
			printf("\n%c->%c\n",com,fin);
			hanoi(n-1,aux,com,fin);
		}
	}
