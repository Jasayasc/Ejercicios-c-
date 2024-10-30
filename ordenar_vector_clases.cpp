#include <iostream>
using namespace std;

class ordenar{
	private:
		int numero[25];
		int auxiliar,i,j,tamano;
	public:
		ordenar();
		~ordenar();
		void entrada(void);
		void proceso(void);
		void salida(void);
};

ordenar::ordenar(){
	auxiliar=1;
	i=0;
	j=0;
	tamano=0;
}

ordenar::~ordenar(){}

void ordenar::entrada(void){
	cout<<"Cuantos numeros desea ordenar: ";
	cin>>tamano;
	numero[tamano]={1};
	cout<<"Digite los numeros a ordenar: ";
	for(i=0;i<tamano;i++){
		cin>>numero[i];
	}
}

void ordenar::proceso(void){
	for(i=0;i<tamano;i++){
		for(j=0;j<tamano;j++){
			if(numero[j]>numero[j+1]){
				auxiliar = numero[j];
				numero[j] = numero[j+1];
				numero[j+1] = auxiliar;
			}
		}
	}
}

void ordenar::salida(void){
	cout<<"Los numeros anteriormente ingresados ordenados son: ";
	for(i=0;i<tamano;i++){
		cout<<numero[i]<<"  ";
	}
}

int main(){
	ordenar burbuja;
	burbuja.entrada();
	burbuja.proceso();
	burbuja.salida();
	return 0;
}