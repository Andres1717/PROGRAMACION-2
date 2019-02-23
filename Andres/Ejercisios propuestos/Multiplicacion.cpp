//nombre Andres isai vasquez vasquez  Carnet VV18009
//Multiplicacion

#include <iostream>
#include<conio.h>

using namespace std;

double numero();

int main(){
	
	numero();
	getch ();
	return 0;
	
}

double numero (){
	
	int num;
	int result;
	
	cout <<"ingrese un numero:"<<endl;
	cin>>num;
	
	int *puntero=&num;
	int *puntero *10;
	
	cout <<"el numero es"<< num << "multiplicado por 10 su resultado es:"<<endl;
	cout<< result << endl;
}
}
