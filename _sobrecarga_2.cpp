#include <iostream>
using namespace std;

class vecto{
	public:
		void entrada(int*, int*, int*);
		void entrada(float*, int*, int*);
		
		
		void eliminar(int*, int*, int*);
		void eliminar(float*, int*, int*);
		
		
		//void imprimir(int*, int*, int);
		//void imprimir(float*, int*, int);
};



void vecto::entrada(int *x, int *i, int *t){
	if(*i==*t){
		cout<<"No se puede insertar mas valores"<<endl;
	}else if(*i<*t){
	cout<<"Digite el valor ["<<*i+1<<"] del vector(enteros): ";
	cin>>x[*i];
	*i = *i++;
	}
}

void vecto::entrada(float *y, int *i, int *t){
//	i=i-1;
	if(*i==*t){
		cout<<"No se puede insertar mas valores"<<endl;
	}else if(*i<*t){
	cout<<"Digite el valor ["<<*i+1<<"] del vector(decimal): ";
	cin>>y[*i];
	*i = *i++;
	}
}

void vecto::eliminar(int *x, int *i, int *t){
	int *aux = new int[*t-1];
	for(int a = 0; a<*t-1;a++){
		aux[a] = x[a+1];
	}
	delete x;
	x = new int[*t-1];
	for(int a = 0; a<*t-1;a++){
		x[a] = aux[a];
	}
	cout<<"El vector ahora es igual a : ";
	for(int a=0;a<*t-1;a++){
		cout<<x[a]<<"  ";
	}
}
void vecto::eliminar(float *y, int *i, int *t){
	int *aux = new int[*t-1];
	for(int a = 0; a<*t-1;a++){
		aux[a] = y[a+1];
	}
	delete y;
	y = new float[*t-1];
	for(int a = 0; a<*t-1;a++){
		y[a] = aux[a];
	}
	cout<<"El vector ahora es igual a : ";
	for(int a=0;a<*t-1;a++){
		cout<<y[a]<<"  ";
	}
}
int main(){
	int t=0, resp=0, i=0;
	cout<<"Vectores de tamano: ";
	cin>>t;
	
	int* x = new int[t];
	float* y = new float[t];
	
	vecto a;
	while(resp != 4){
		system("cls");
		cout<<"\tMenu Principal"<<endl;
		cout<<"1. Insertar"<<endl<<"2. Eliminar"<<endl<<"3. Imprimir"<<endl<<"4. Salir"<<endl<<"Digite opcion: ";
		cin>>resp;
		if(resp==1)
			a.entrada(x,&i,&t);
			a.entrada(y,&i,&t);
		if(resp==2)
			a.eliminar( x,&i,&t);
			a.eliminar( y,&i,&t);
		if(resp==3)
			//a.imprimir(x,  *i, t);
			//a.imprimir(x,  *i, t);
		if(resp<1 or resp>4){
			cout<<"Opcion fuera de rango"<<endl;
		}
	}
	
	return 0;
}
