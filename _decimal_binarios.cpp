#include <iostream>
using namespace std;

class convertir{
	private:
		char palabra;
		int divisor,modulo,decimal,contador;
		int modulos[50];
	public:
		convertir();
		~convertir();
		void entradaDatos(void);
		void procesoDatos(void);
		void salidaDatos(void);
}binarios;

convertir::convertir(){
	palabra=0;
	divisor=0;
	modulo=0;
	decimal=0;
	contador = 0;
	modulos[50]={0};
}

convertir::~convertir(){
	delete modulos;
}

void convertir::entradaDatos(void){
	cout<<"Digite una letra: ";
	cin>>palabra;
}

void convertir::procesoDatos(void){
	decimal = (int)palabra;
	while(decimal!=0){
		modulo = decimal%2;
		divisor = decimal/2;
		modulos[contador] = modulo;
		contador++;
		decimal = divisor;
	}
	
}


void convertir::salidaDatos(void){
	cout<<"la letra: "<<palabra<<" en decimal es: "<<(int)palabra<<endl;
	cout<<"en binario es: ";
	for(int i=contador-1;i>=0;i--){
		cout<<modulos[i];
	}
}

int main(){
	binarios.entradaDatos();
	binarios.procesoDatos();
	binarios.salidaDatos();
	return 0;
}
