//nombre Andres isai vasquez vasquez  Carnet VV18009


//librerias que se utilizaron
#include <iostream>
#include <conio.h>

using namespace std;

int mayor();

int main() {
	mayor() ;
	getch();
	}
	
int mayor()	{
	int a ;
	int b ;
	
	
	cout <<"ingrese un numero: "<<endl;
	cin>>a;
	
	cout <<"ingrese el segundo numero: "<<endl;
	cin>>b;
	
	int *punteroX=&a;
	int *punteroY=&b;
	
	if (*punteroX > *punteroY){
	cout<<"el primer numero es :"<<endl;
	cout<<*punteroX<<endl;
	
	cout<<"el segundo numero es :"<<endl;
	cout<<*punteroY<<endl;
	}
	
	
	
	else{
	cout<<"el numero es mayor :"<<endl;
	cout<<*punteroY<<endl;
	
	cout<<"el  numero es menor:"<<endl;
	cout<<*punteroX<<endl;
}	
	
	return 0;
} 
