#include <iostream>
using namespace std;

class factor{
	private:
		int numero,numero2,contador,resultado;
	public:
		factor();
		~factor();
		void entrada(void);
		void proceso(void);
		void salida(void);
};

factor::factor(){
	numero=0;
	numero2=0;
	contador=0;
	resultado=1;
	}
factor::~factor(){}

void factor::entrada(void){
	cout<<"Digite un numero a hallar factorial: ";
	cin>>numero;
	numero2=numero;
}

void factor::proceso(void){
	for(int i=numero;i>=1;i--){
		resultado = resultado * numero;
		numero-=1;
	}
}

void factor::salida(void){
	cout<<"El factorial del numero "<<numero2<<" es: "<<resultado<<endl;
}

int main(){
	factor pera;
	pera.entrada();
	pera.proceso();
	pera.salida();
}