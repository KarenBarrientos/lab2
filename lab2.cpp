#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double factorial(int n);
int menu();

int main(int argc, char const *argv[]){
	int opcion=0;
	char fact[15];
	
	
	while ( (opcion = menu()) != 3){
		int suma=0;
		if (opcion == 1){

			for (int i = 0; i < 100000; ++i){
				
			//fact=(char)i;

				for(int i=0;i<15;i++){
					if(fact[i] != '\0'){
						cout<<factorial(fact[i]-48)<<endl;
						suma+=factorial(fact[i]-48);
					}
				}
			
			} // fin for
 
		} // fin if 

	} //fin while

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

