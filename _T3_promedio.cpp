#include <iostream>
using namespace std;

class matriz{
	public:
		int** reservar(int, int);
		void entrada(int**, int, int);		
		void proceso(int**, int, int);	
		void salida(int**, int, int,float,float, int[],int, int[],int);
		void liberar(int**, int, int);
		
};

int** matriz::reservar(int f,int c){
	int** m;
	m = new int*[f];
	if(m==NULL)
		cout<<"error";
	for(int i=0;i<f;i++){
		m[i] = new int[c];
		if(m[i]==NULL)
			cout<<"error";
	}
	for(int i =0;i<f;i++){
		for(int j=0;j<c;j++){
			m[i][j]=0;
		}
	}
	return m;
}

void matriz::entrada(int** m,int f,int c){
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<"Digite el valor ["<<i<<"]["<<j<<"] de la matriz: ";
			cin>>m[i][j];
		}
	}
}
 void matriz::proceso(int** m, int f, int c){
	float sum=0.0;
	float prom=0.0;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			sum = sum+m[i][j];
		}
	}
	prom = sum/(f*c);
	int contador=0, contador_m=0;
	int *arriba = new int[f*c];
	int *abajo = new int[f*c];
	if(arriba == NULL or abajo == NULL)
		cout<<"Error";
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			if(m[i][j]>=prom){
				arriba[contador]=m[i][j];
				contador++;
			}
			else{
				abajo[contador_m]=m[i][j];
				contador_m++;
			}
		}
	}
	salida(m,f,c,sum,prom,arriba,contador,abajo, contador_m);
 }
 
 void matriz::salida(int** m, int f, int c,float sum, float prom, int *arriba,int contador, int *abajo, int contador_m){
	cout<<"----------------------------------------------------------"<<endl<<"\tResultados"<<endl<<"----------------------------------------------------------";
	cout<<endl<<"La matriz obtenida fue: "<<endl;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<"\t"<<m[i][j];
		}
		cout<<endl;
	}
	cout<<"La suma de toda la matriz fue de: "<<sum<<endl;
	cout<<"La promedio de la matriz fue de: "<<prom<<endl;
	cout<<"Los numeros por arriba del promedio fueron: ";
	for(int i=0;i<contador;i++){
		cout<<arriba[i]<<" ";
	}
	cout<<endl;
	cout<<"Los numeros por debajo del promedio fueron: ";
	for(int j=0;j<contador_m;j++){
		cout<<abajo[j]<<" ";
	}
	delete arriba;
	delete abajo;
 }
 
 void matriz::liberar(int** m, int f, int c){
	for(int i=0;i<c;i++){
		delete m[i];
	}
	delete m;
 }
 
 int main(){
	int filas, columnas;
	cout<<"ingrese la cantidad de filas de la matriz: ";cin>>filas;
	cout<<"ingrese la cantidad de columnas de la matriz: ";cin>>columnas;
	matriz x;
	int** m;
	m = x.reservar(filas, columnas);
	x.entrada(m, filas, columnas);
	x.proceso(m, filas, columnas);
	x.liberar(m, filas, columnas);
 }