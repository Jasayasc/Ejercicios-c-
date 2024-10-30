#include <iostream>
using namespace std;

class vector{
	public:
		void entrada(int[], int);
		void entrada(float[], int);
		
		void elimnar(int[], int);
		void elimnar(float[], int);
		
		void imprimir(int[], int);
		void imprimir(float[], int);
};

void vector::entrada(int x[], int i){
	cout<<"Numero a insertar (entero) ["<<i<<"]:";
	cin>>x[i];
}

void vector::entrada(float y[], int i){
	cout<<"Numero a insertar(entero) ["<<i<<"]:";
	cin>>y[i];
}

void vector::elimnar(int x[], int a){
	for(int i=0; i<a; i++)
		x[i]=x[i+1];
}

void vector::elimnar(float y[], int a){
	for(int i=0; i<a; i++)
		y[i]=y[i+1];
}

void vector::imprimir(int x[], int i){
	cout<<"Vector entero: ";
	for(int a=0; a<i; a++)
		cout<<x[a]<<"   ";
	cout<<endl;
}

void vector::imprimir(float y[], int i){
	cout<<"Vector decimal: ";
	for(int a=0; a<i; a++)
		cout<<y[a]<<"   ";
	cout<<endl;
}

int main(){
	int resp=0, contador=0, t=0;
	cout<<"Digite tamano del vector: ";
	cin>>t;
	int *x = new int[t];
	float *y = new float[t];
	if(x==NULL or y==NULL)
		cout<<"error"<<endl;
	for(int i=0;i<t;i++){
		x[i]=0;
		y[i]=0.0;
	}
	vector a;
	do{
		cout<<"\tMenu Principal"<<endl;
		cout<<"1. Insertar"<<endl;
		cout<<"2. Eliminar"<<endl;
		cout<<"3. Imprimir"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Digite opcion --> ";
		cin>>resp;
		switch(resp){
			case 1:{
				if(contador==t-1)
					cout<<"Ya no se pueden insertar mas valores"<<endl;
				else
					a.entrada(x, contador);
					a.entrada(y, contador);
					contador++;
				break;
			}
			case 2:{
				if(contador<=0)
					cout<<"No se pueden eliminar mas valores"<<endl;
				else
					a.elimnar(x, contador);
					a.elimnar(y, contador);
					contador--;
				break;
			}
			case 3:{
				a.imprimir(x, contador);
				a.imprimir(y, contador);
				break;
			}
		}
	}while(resp!=4);
	return 0;
}