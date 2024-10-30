#include <iostream>
using namespace std;

class perfectos{
	private:
		int numero,elevado,resultado,contador,constante,divisor,numero_2;
		int digitos[5];
	public:
		perfectos();
		~perfectos();
		void entrada(void);
		void proceso(void);
		void salida(void);
}cubo;

perfectos::perfectos(){
	numero=0;
	numero_2=0;
	elevado=0;
	resultado=0;
	contador=0;
	constante=0;
	divisor=10000;
	digitos[5]={0};
}

perfectos::~perfectos(){}

void perfectos::entrada(void){
	cout<<"Digite un numero entero: ";
	cin>>numero;
	numero_2 = numero;
}

void perfectos::proceso(void){
	if(numero>=10000){
		while(divisor>=1){
			constante = numero/divisor;
			digitos[contador]=constante;
			contador++;
			numero = numero - (constante*divisor);
			divisor = divisor/10;
		}	
	}else if(numero>=1000){
		divisor = 1000;
		while(divisor>=1){
			constante = numero/divisor;
			digitos[contador]=constante;
			contador++;
			numero = numero - (constante*divisor);
			divisor = divisor/10;
		}	
	}else if(numero>=100){
		divisor = 100;
		while(divisor>=1){
			constante = numero/divisor;
			digitos[contador]=constante;
			contador++;
			numero = numero - (constante*divisor);
			divisor = divisor/10;
		}	
	}else if(numero>=10){
		divisor = 10;
		while(divisor>=1){
			constante = numero/divisor;
			digitos[contador]=constante;
			contador++;
			numero = numero - (constante*divisor);
			divisor = divisor/10;
		}	
	}else{
		digitos[contador] = numero;
	}
	for(int j=0;j<contador;j++){
		elevado = digitos[j]*digitos[j]*digitos[j];
		resultado+=elevado;
	}
}

void perfectos::salida(void){
	cout<<"Los digitos del numero elevado al cubo son: "<<resultado;
	if(numero_2==resultado){
		cout<<", el numero es un cubo perfecto";
	}else{
		cout<<", el numero no es un cubo perfecto";
	}
}

int main(){
	cubo.entrada();
	cubo.proceso();
	cubo.salida();
}