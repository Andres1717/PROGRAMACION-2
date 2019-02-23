//nombre Andres isai vasquez vasquez  Carnet VV18009
//Cadena
#include <iostream>
#include<conio.h>
#include <stdlib.h>


char cad[16]
char *ptrcad;

using namespace std;
int main(){
	cout <<"ingrese su cad:";
	gets(cad);
	cout <<"\n" << cad;
	cout <<endl;
	
	for(int i=15; i>=0; i--){
		ptrcad=&cad[i];
		cout<<*ptrcad;
	}
	
	getch();
	return 0;
}
