#include <iostream>
using namespace std;

class m {
	public:
		struct m1 {
			float **matriz;
			int t;
			};
		m(m1 *);
		void asignar(m1 *);
		void proceso(m1 *);
		void salida(m1 *);
	};

m::m(m1 *ma) {
	ma->t=0;
	}

void m::asignar(m1 *ma) {
	cout<<"Digite el tamano de la matriz: ";
	cin>>ma->t;
	ma->matriz = new float*[ma->t];
	if(ma->matriz == NULL)
		cout<<"Error";
	for(int i = 0; i<ma->t; i++) {
		ma->matriz[i] = new float[ma->t];
		if(ma->matriz[i] == NULL)
			cout<<"Error";
		}
	for(int i = 0; i< ma->t; i++) {
		for(int j = 0; j< ma->t; j++) {
			ma->matriz[i][j] = 0.0;
			}
		}
	}

void m::proceso(m1 *ma) {
	for(int i = 0; i < ma->t; i++) {
		for(int j = 0; j < ma->t; j++) {
			if(i==j)
				ma->matriz[i][j] = 1.0;
			if(i+j == ma->t - 1)
				ma->matriz[i][j] = 1.0;
		}
	}
}


void m::salida(m1 *ma) {
	cout<<endl<<"Matriz obtenida: "<<endl;
	for(int i = 0; i< ma->t; i++) {
		for(int j = 0; j< ma->t; j++) {
			cout<<"\t"<<ma->matriz[i][j];
			}
		cout<<endl;
		}
	for(int i = 0; i< ma->t; i++) {
		delete ma->matriz[i];
		}
	delete ma->matriz;
	}

int main() {
	m::m1 ma;
	m m2(&ma);
	m2.asignar(&ma);
	m2.proceso(&ma);
	m2.salida(&ma);
	return 0;
	}
