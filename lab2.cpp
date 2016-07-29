#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int menu();
double factorial(int n);
int suma(int num,int sum);

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
		else{
			int numero1,numero2;
    		int suma1=1,suma2=1;
    		cout<<"Ingrese primer numero"<<endl;
    		cin>>numero1;
    		cout<<"Ingrese segundo numero"<<endl;
    		cin>>numero2;
    		sum1=suma(numero1,suma1);
    		sum2=suma(numero2,suma2);
    		if((suma1==numero2) && (suma2==numero1)){
        		cout<<"Los numeros "<<n1<<" y "<<
        		n2<<" son numeros amigos";
    		}else{
        		cout<<"Los numeros "<<n1<<" y "<<
        		n2<<" no son numeros amigos";
    		}
		} // fin else

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

int suma(int num,int sum){
    for(int i=2;i<num;i++){
    	if(num % i==0){
    		sum+=i;
    	}
    }
    return sum;
}
