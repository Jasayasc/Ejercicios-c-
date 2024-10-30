#include <iostream>
using namespace std;

class vector{
	int contador;
	public:
		vector();
		void menu(vector);
		
		void operator+(int *);
		void operator+(float *);
		
		void operator-(int *);
		void operator-(float*);
		
		void imprimir(int*);
		void imprimir(float*);
};

vector::vector(){
	contador=0;
}

void vector::menu(vector a){
	int resp=0, t=0;
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
	do{
		cout<<"\tMenu Principal"<<endl;
		cout<<"1. Insertar"<<endl;
		cout<<"2. Eliminar"<<endl;
		cout<<"3. Imprimir"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Digite opcion --> ";
		cin>>resp;
		if(resp<0 or resp>4)
			cout<<"Digite opcion valida"<<endl;
		switch(resp){
			case 1:{
				if(contador==t){
					cout<<"Ya no se pueden insertar mas valores"<<endl;
					break;
				}
				else{
					a+(x);
					a+(y);
					contador++;
					break;
				}
			}
			case 2:{
				if(contador<=0){
					cout<<"No quedan valores a eliminar"<<endl;
					break;
				}
				else{
					a-(x);
					a-(y);
					contador--;
				}
				break;
			}
			case 3:{
				if(contador==0){
					cout<<"Vector vacio"<<endl;
					break;
				}else{
				imprimir(x);
				imprimir(y);
				}
				break;
			}
		}
	}while(resp!=4);
	delete x;
	delete y;
}

void vector::operator+(int *x){
	cout<<"Numero a insertar (entero) ["<<contador<<"]:";
	cin>>x[contador];
}

void vector::operator+(float *y){
	cout<<"Numero a insertar(entero) ["<<contador<<"]:";
	cin>>y[contador];
}

void vector::operator-(int *x){
	for(int i=0; i<contador; i++)
		if(i==contador-1)
			x[i]=0;
		else
			x[i]=x[i+1];
}

void vector::operator-(float *y){
	for(int i=0; i<contador; i++)
		if(i==contador-1)
			y[i]=0;
		else
			y[i]=y[i];
}

void vector::imprimir(int *x){
	cout<<"Vector entero: ";
	for(int a=0; a<contador; a++)
		cout<<x[a]<<"   ";
	cout<<endl;
}

void vector::imprimir(float *y){
	cout<<"Vector decimal: ";
	for(int a=0; a<contador; a++)
		cout<<y[a]<<"   ";
	cout<<endl;
}

int main(){
	vector b;
	b.menu(b);
	return 0;
}