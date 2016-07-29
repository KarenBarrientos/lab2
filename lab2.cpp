#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double factorial(int n);

int main(int argc, char const *argv[]){
	int fact,opcion=0;

	while ( (opcion = menu()) != 3){
		if (opcion == 1)
			cout<<"Ingrese numero: "<<endl;
        		cin>>fact;
			cout<<factorial(fact)<<endl;
	//	else 
			
	}

return 0;	
}

int menu(){
	cout << "1. Ejercicio 1" << endl
	     << "2. Ejercicio 2" << endl
	     << "3. Salir" << endl;
	int opcion;
	do{
		cin >> opcion;
		if (opcion != 1 && opcion != 2 && opcion != 3)
			cout << "Introduzca un valor correcto" << endl;
	}while (opcion != 1 && opcion != 2 && opcion != 3);

	return opcion;
}

double factorial(int num){
    double factorial=1;
    for (int i=1 ; i<=num ; i++){
         factorial=i*factorial;
    }

    return factorial;
}

