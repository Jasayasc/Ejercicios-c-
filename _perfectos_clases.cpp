#include <iostream>
using namespace std;

class numero{
	private:
		int digito;
		int divisores[20]={0};
		int contador=0, suma=0;
	public:
		numero();
		~numero();
		void entrada(void);
		void proceso(void);
		void salida(void);
}perfectos;

numero::numero(){
	digito=0;
	divisores[20]={0};
	contador=0;
	suma=0;
	
}

numero::~numero(){}

void numero::entrada(void){
	cout<<"Digite un numero: ";
	cin>>digito;
}

void numero::proceso(void){
	for(int i=1;i<digito;i++){
		if(digito%i==0){
			//cout<<i<<"  ";
			divisores[contador]=i;
			contador++;
		}
	}
	for(int j=0;j<contador;j++){
		suma+=divisores[j];
	}
}

void numero::salida(void){
	cout<<endl;
	if (suma==digito){
		cout<<numero<<" es un numero perfecto, debido a que sus divisores: ";
		for(int j=0;j<contador;j++){
		cout<<divisores[j]<<" ";
		}
		cout<<", suman "<<numero<<endl;
	}
	
	else{
		cout<<numero<<" no es un numero perfecto, debido a que sus divisores: ";
		for(int j=0;j<contador;j++){
		cout<<divisores[j]<<" ";
		}
		cout<<", no suman "<<numero<<endl;
	}
}


int main(){
	perfectos.entrada();
	perfectos.proceso();
	perfectos.salida();
	return 0;
}