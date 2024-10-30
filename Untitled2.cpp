// 10 Hacer un programa que calcule los factoriales desde m hasta n.

#include <iostream>
using namespace std;

class factorial{
	private:
		int numero1;
		int numero2;
		int factoriales[50];
		int contador;
		int resultado;
	public:
		void entrada(void);
		void proceso(void);
		void salida(void);
}factor;

void factorial::entrada(void){
	numero1 = 0;
	numero2 = 0;
	contador =0;
	resultado = 1;
	cout<<"Digite el primer numero: ";
	cin>>numero1;
	cout<<"Digite el primer numero: ";
	cin>>numero2;
}

void factorial::proceso(void){
	if(numero2<numero1){
		for(int i=numero1;i>=numero2;i--){
			factoriales[contador]=i;
			contador++;
			resultado = i * resultado;
		}
	}
	else{
		for(int i=numero2;i>=numero1;i--){
			factoriales[contador]=i;
			contador++;
			resultado = i * resultado;
		}
	}
}

void factorial::salida(void){
	cout<<"-------------------------------------------"<<endl<<"Resultado"<<endl<<"-------------------------------------------"<<endl;
	cout<<"Numeros ingresados: "<<numero1<<" , "<< numero2<<endl;
	if(numero2<numero1){
		cout<<"Factorial de "<<numero1<<" hasta "<<numero2<<": ";
		for(int i=0;i<contador;i++){
			cout<<factoriales[i]<<" x ";
		}
	}
	else{
		
	}
}
