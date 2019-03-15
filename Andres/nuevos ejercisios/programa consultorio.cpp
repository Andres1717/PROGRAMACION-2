#include <iostream>
#include <windows.h>

using namespace std;



class consul {
private:
    class Nodo {
    public:
        int corr;
        char nomb[50];
        char apell[50];
        int edad;
        char sex[15];
        int pes;
        char enferm[30];
        Nodo *sig;
    };

Nodo *raiz;



public:
    consul();
    ~consul();
    void buscar();
    void insertar();
    //int extraer();
    void imprimir();
};

consul::consul(){
    raiz = NULL;
}

void consul::insertar(){
    Nodo *nuevo;
    nuevo = new Nodo();
    cout<<"ingrese correlativo:";
    cin>>nuevo->corr;
    cout<<"ingrese nombre:";
    cin>>nuevo->nomb;
    cout<<"ingrese apellido:";
    cin>>nuevo->apell;
    cout<<"ingrese edad:";
    cin>>nuevo->edad;
    cout<<"ingrese sexo:";
    cin>>nuevo->sex;
    cout<<"ingrese peso:";
    cin>>nuevo->pes;
    cout<<"ingrese enfermedad:";
    cin>>nuevo->enferm;
    if (raiz == NULL){
        raiz = nuevo;
        nuevo->sig = NULL;
    }
    else{
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

void consul::imprimir(){
    Nodo *reco = raiz;
    cout << "Listado de todos los elementos de la cola.\n";
    while (reco != NULL){
        cout << reco->corr << "-";
        cout << reco->nomb << "-";
        cout << reco->apell << "-";
        cout << reco->edad << "-";
        cout << reco->sex << "-";
        cout << reco->pes << "-";
        cout << reco->enferm << "-";
        reco = reco->sig;
    }
    cout << "\n";
}

/*int Pila::extraer(){
    if (raiz != NULL){
        int informacion = raiz->info;
        Nodo *bor = raiz;
        raiz = raiz->sig;
        delete bor;
        return informacion;
    }
    else{
        cout<<"No hay mas datos en la pila..."<<endl;
    }
}
*/
//funcion implementada para buscar datos
void consul::buscar(){
	
	//verificamos si el nodo contiene datos
	if (raiz != NULL){
		//si tiene datos pasaremos a pedir el dato a buscar
		int buscardatos;
	    cout<<"Ingrese correlativo a buscar"<<endl;
	    cin>>buscardatos;
	    
	    //comparamos el dato que ingreso con el primer dato del nodo
	    if(buscardatos == raiz->corr){ 
	    	//lo mostramos en pantalla
            cout<<"Encontrado, el elemento es: "<<raiz->corr<<endl;
		}
		else{
			//si no se encuentra mostramos esto
			cout<<"El elemento ingresado no esta en la cola"<<endl;
		}
	}
	else{
		//si la pila no contiene  nada mostramos este mensaje
		cout<<"La cola esta vacia...."<<endl;
	}
}

consul::~consul(){
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL){
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}



//funcion menu encargada de pedir datos al usuario
void menu(){
		cout<<"                   BIENVENIDO.                    "<<endl<<endl;

	cout<<"              Sistema de consultorio.          "<<endl;
	cout<<"              Ingrese una opcion.          "<<endl<<endl;
    cout<<"1 - Agregar un nuevo paciente."<<endl;
    cout<<"2 - Mostrar datos del paciente."<<endl;
    //cout<<"3 - Extraer un elemento de la pila"<<endl;
    cout<<"3 - Buscar un paciente."<<endl;
    cout<<"4 - Salir."<<endl;
}


int main(){
    consul *consul1;
    consul1= new consul();
    int opc;
    
system ("color 0a");
    
    do{
		
	    menu();
	    cin>>opc;
	    
	    switch(opc){
	    	
	    	//INGRESO DE DATOS A LA PILA
	    	case 1:
	    		char res;
	    		do{
		    		
		    		consul1->insertar();
		    		cout<<"Desea ingresar mas datos a la cola? (y/n)"<<endl;
		    		cin>>res;
				}while(res == 'y' || res == 'y');
	    	break;
	    	
	    	//MOSTRAR LOS DATOS QUE ESTAN EN LA PILA
	    	case 2:
	    		consul1->imprimir();
	    	break;
	    	
	    	//ELIMINAR DATOS DE LA PILA
	    	case 3:
	    		consul1->buscar();
	    	break;
	    	
	    	//BUSCAR DATOS EN LA PILA
	    	case 4:
	    	break;
	    	
		}
		system("pause");
		system("cls");
    }while(opc!=4);
	
	
	
    return 0;
}


