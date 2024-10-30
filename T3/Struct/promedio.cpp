#include <iostream>
using namespace std;

class m{
	public:
		struct m1{
			float **matriz, *arriba, *abajo, prom, sum;
			int f,c,contador, contador_a;
		};
		m(m1 *);
		void asignar(m1 *);
		void entrada(m1 *);
		void proceso(m1 *);
		void salida(m1 *);
};

m::m(m1 *ma){
	ma->prom = 0.0;
	ma->f = 0;
	ma->c = 0;
	ma->contador = 0;
	ma->contador_a = 0;
}

void m::asignar(m1 *ma){
	cout<<"Digite el numero de filas de la matriz: ";cin>>ma->f;
	cout<<"Digite el numero de columnas de la matriz: ";cin>>ma->c;
	ma->matriz = new float*[ma->f];
	if(ma->matriz == NULL)
		cout<<"Error";
	for(int i = 0; i<ma->f; i++){
		ma->matriz[i] = new float[ma->c];
		if(ma->matriz[i] == NULL)
			cout<<"Error";
	}
	for(int i = 0; i< ma->f; i++){
		for(int j = 0; j< ma->c; j++){
			ma->matriz[i][j] = 0.0;
		}
	}
	ma->arriba = new float[ma->f * ma->c];
	ma->abajo = new float[ma->f * ma->c];
	if(ma->arriba == NULL || ma->abajo == NULL)
		cout<<"Error";
	for(int i = 0; i< (ma->f * ma->c ); i++){
		ma->arriba[i] = 0.0;
		ma->abajo[i] = 0.0;
	}
}

void m::entrada(m1 *ma){
	for(int i = 0; i< ma->f; i++){
		for(int j = 0; j< ma->c; j++){
			cout<<"Digite el valor ["<<i+1<<"]["<<j+1<<"] de la matriz: ";
			cin>>ma->matriz[i][j];
		}
	}
}

void m::proceso(m1 *ma){
	for(int i = 0; i < ma->f; i++){
		for(int j = 0; j < ma->c; j++){
			ma->sum = ma->sum + ma->matriz[i][j];
		}
	}
	ma->prom = ma->sum/(ma->f * ma->c);
	for(int i = 0; i < ma->f; i++){
		for(int j = 0; j < ma->c; j++){
			if(ma->matriz[i][j] <= ma->prom){
				ma->abajo[ma->contador_a] = ma->matriz[i][j];
				ma->contador_a++;
			}
			if(ma->matriz[i][j] >= ma->prom){
				ma->arriba[ma->contador] = ma->matriz[i][j];
				ma->contador++;
			}
		}
	}
}


void m::salida(m1 *ma){
	cout<<endl<<"Matriz obtenida: "<<endl;
	for(int i = 0; i< ma->f; i++){
		for(int j = 0; j< ma->c; j++){
			cout<<"\t"<<ma->matriz[i][j];
		}
		cout<<endl;
	}
	cout<<endl<<"Resultados obtenidos: "<<endl;
	cout<<"Suma total de la matriz: "<<ma->sum<<endl;
	cout<<"Promedio de la matriz: "<<ma->prom<<endl;
	cout<<"Hay "<<ma->contador<<" numeros por arriba del promedio que son: ";
	for(int i = 0; i< ma->contador; i++){
		cout<<ma->arriba[i]<<"\t";
	}
	cout<<endl<<"Hay "<<ma->contador_a<<" numeros por debajo del promedio que son: ";
	for(int i = 0; i< ma->contador_a; i++){
		cout<<ma->abajo[i]<<"\t";
	}
	
	delete ma->arriba;
	delete ma->abajo;
	for(int i = 0; i< ma->f; i++){
		delete ma->matriz[i];
	}
	delete ma->matriz;
}

int main(){
	m::m1 ma;
	m m2(&ma);
	m2.asignar(&ma);
	m2.entrada(&ma);
	m2.proceso(&ma);
	m2.salida(&ma);
	return 0;
}
