#include <iostream>
using namespace std;

class m{
	public:
		struct m1{
			float **matriz, *fila, *columna;
			float dp, ds, sum;
			int t;
		};
		m(m1 *);
		void asignar(m1 *);
		void entrada(m1 *);
		void proceso(m1 *);
		void salida(m1 *);
};

m::m(m1 *ma){
	ma->dp = 0.0;
	ma->ds = 0.0;
	ma->sum = 0.0;
	ma->t=0;
}

void m::asignar(m1 *ma){
	cout<<"Digite el tamano de la matriz: ";
	cin>>ma->t;
	ma->matriz = new float*[ma->t];
	if(ma->matriz == NULL)
		cout<<"Error";
	for(int i = 0; i<ma->t; i++){
		ma->matriz[i] = new float[ma->t];
		if(ma->matriz[i] == NULL)
			cout<<"Error";
	}
	for(int i = 0; i< ma->t; i++){
		for(int j = 0; j< ma->t; j++){
			ma->matriz[i][j] = 0.0;
		}
	}
	ma->fila = new float[ma->t];
	ma->columna = new float[ma->t];
	if(ma->fila == NULL || ma->columna == NULL)
		cout<<"Error";
	for(int i = 0; i< ma->t; i++){
		ma->fila[i] = 0.0;
		ma->columna[i] = 0.0;
	}
}

void m::entrada(m1 *ma){
	for(int i = 0; i< ma->t; i++){
		for(int j = 0; j< ma->t; j++){
			cout<<"Digite el valor ["<<i+1<<"]["<<j+1<<"] de la matriz: ";
			cin>>ma->matriz[i][j];
		}
	}
}

void m::proceso(m1 *ma){
	for(int i = 0; i < ma->t; i++){
		for(int j = 0; j < ma->t; j++){
			ma->fila[i] = ma->fila[i] + ma->matriz[i][j];//Suma de filas
			ma->columna[i] = ma->columna[i] + ma->matriz[j][i];//Suma de columnas
			if(i==j)
				ma->dp+=ma->matriz[i][i];//Suma de la diagonal principal
			if(i+j == ma->t - 1)
				ma->ds += ma->matriz[i][j] ;//Suma de la diagonal secundaria
			ma->sum += ma->matriz[i][j];
		}
	}
}


void m::salida(m1 *ma){
	cout<<endl<<"Matriz obtenida: "<<endl;
	for(int i = 0; i< ma->t; i++){
		for(int j = 0; j< ma->t; j++){
			cout<<"\t"<<ma->matriz[i][j];
		}
		cout<<endl;
	}
	cout<<endl<<"Resultados obtenidos: "<<endl;
	cout<<"Suma de sus filas: ";
	for(int i = 0; i< ma->t; i++){
		cout<<ma->fila[i]<<"\t";
	}
	cout<<endl<<"Suma de sus columnas: ";
	for(int i = 0; i< ma->t; i++){
		cout<<ma->columna[i]<<"\t";
	}
	cout<<endl<<"Suma de la diagonal principal: "<<ma->dp<<endl;
	cout<<"Suma de la diagonal secundaria: "<<ma->ds<<endl;
	cout<<"Sumatoria total de la matriz: "<<ma->sum;
	
	delete ma->columna;
	delete ma->fila;
	for(int i = 0; i< ma->t; i++){
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
