#include <iostream>
using namespace std;

class matriz{
	private:
		int **m, *fila, *columna;
		int contador, i ,j,t, diagonal,diagonals;
		bool bandera;
	public:
		matriz(int);
		~matriz();
		void entrada(void);		
		void proceso(void);	
		void salida(void);
		
};

matriz::matriz(int n){
	contador = i = j =diagonal=diagonals= 0;
	t = n;
	bandera = true;
	fila = new int[contador];
	columna = new int[contador];
	m = new int*[t];
	if(m == NULL)
		cout<<"Error";
	for(i=0;i<t;i++){
		m[i]= new int[t];
		if(m[i]== NULL)
			cout<<"Error";
	}
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			m[i][j]=0;
		}
	}
}

matriz::~matriz(){
	delete fila;
	delete columna;
	for(i=0;i<t;i++){
		delete m[i];
	}
	delete m;
}

void matriz::entrada(void){
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			cout<<"Digite el digito ["<<i<<"]["<<j<<"] de la matri<: ";
			cin>>m[i][j];
		}
	}
}

void matriz::proceso(void){
	
	int n = t-1;
	for(i=0;i<t;i++){
		for(i=0;i<t;i++){
			fila[contador] = fila[contador] + m[i][j];
			columna[contador] = columna[contador] + m[j][i];
		}
		contador++;
	}
	for(i=0;i<t;i++){
		for(i=0;i<t;i++){
			if(i==j){
				diagonal = diagonal + m[i][j];
			}
			if((i+j)==(t+1)){
			diagonals = diagonals + m[i][j];
			}
		}
	}
	i=0;
	while(bandera and i<contador){
		cout<<"si";
		if(fila[i]!=columna[i+1]){
			bandera= false;
		}
		i++;
	}
}

void matriz::salida(void){
	cout<<"----------------------------------------------------------"<<endl<<"\tResultados"<<endl<<"----------------------------------------------------------";
	cout<<endl<<"La matriz obtenida fue: "<<endl;
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			cout<<"\t"<<m[i][j];
		}
		cout<<endl;
	}
	if(bandera){
		cout<<"La matriz es magica debido a que la suma de sus filas, columas y diagonales dieron: "<<columna[0]<<endl;
	}
	else{
		cout<<"La matriz no es magica"<<endl;
	}
}

int main(){
	int tamano;
	cout<<"ingrese el tamano de la matriz: ";cin>>tamano;
	matriz x(tamano);
	x.entrada();
	x.proceso();
	x.salida();
 }