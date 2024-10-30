#include <iostream>
using namespace std;

class matriz{
	private:
		int fila, columna;
		int matriz_original[7][7];
		int matriz_traspuesta[7][7];
	public:
		matriz();
		~matriz();
		void entrada(void);
		void proceso(void);
		void salida(void);
}traspuesta;

matriz::matriz(){
	fila=0;
	columna=0;
}
matriz::~matriz(){}

void matriz::entrada(void){
	cout<<"Digite los tamanos separado de un espacio: ";
	cin>>fila;
	cin>>columna;
	matriz_original[fila][columna];
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cout<<"Digite el digito ["<<i+1<<"]["<<j+1<<"] de la matriz: ";
			cin>>matriz_original[i][j];
		}
	}
}

void matriz::proceso(void){
	
	for(int i=0;i<columna;i++){
		for(int j=0;j<fila;j++){
			matriz_traspuesta[j][i] = matriz_original[i][j];
		}
	}
}

void matriz::salida(void){
	cout<<"la matriz digitada: "<<endl;
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cout<<matriz_original[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"La matriz traspuesta: "<<endl;
	for(int i=0;i<columna;i++){
		for(int j=0;j<fila;j++){
			cout<<matriz_traspuesta[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

int main(){
	traspuesta.entrada();
	traspuesta.proceso();
	traspuesta.salida();
}