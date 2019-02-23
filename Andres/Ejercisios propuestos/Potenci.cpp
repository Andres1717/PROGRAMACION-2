//nombre Andres isai vasquez vasquez  Carnet VV18009
//Potencia

//libreias que se utilizaron
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;


int potencia();

int main() {
	potencia() ;
	getch();
	return 0;
	}
	
	void potencia ();{
		double a;
		int b;
		float result;
		
	cout <<"ingrese un numero a la base :";
	cin>>a;
	cout<<endl;
	cout << "ingrese un numero para el exponente:";
	cin>>b;
	cout<<endl;

	double *puntero= &a;
	int *puntero_2=&b;
	
	result = pow(*puntero,*puntero_2);
	
	cout <<"el numero "<<a<<"elevado a "<<b<<"es igual a:"result<<endl;
	
	
}
