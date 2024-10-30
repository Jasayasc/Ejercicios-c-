#include <iostream>
using namespace std;

//~ class primero{
	//~ public:
		//~ void entrada (int a[], int);
		//~ int proceso (int b[], int);
		//~ void salida (int c[], int, int);
//~ };

//~ class segundo{
	//~ public:
		//~ void leer (char cad[]);
		//~ void ver (char frase[]);
//~ };

class tercero{
	public:
		void entrada (int a[][3], int);
		void proceso (int b[][3], int, float*);
		void salida (int c[][3], int, float*);
};


//~ void primero::entrada(int a[], int x){
	//~ for(int i=0;i<x;i++){
		//~ cout<<"Digite el dato ["<<i<<"] del arreglo: ";cin>>a[i];
	//~ }
//~ }

//~ int primero::proceso (int b[], int y){
	//~ int sum=0;
	//~ for(int i=0;i<y;i++){
		//~ sum = sum + b[i];
	//~ }
	//~ return sum;
//~ }

//~ void primero::salida(int c[], int z, int suma){
	//~ for(int i =0;i<z;i++){
		//~ cout<<"El valor ["<<i<<"] digitado fue: "<<c[i]<<endl;
	//~ }
	//~ cout<<"La suma es: "<<suma<<endl;
//~ }

//~ int main(int argc, char **argv)
//~ {
	//~ primero p;
	//~ int array[10];
	//~ int t=10;
	//~ int suma;
	//~ p.entrada(array, t);
	//~ suma = p.proceso(array, t);
	//~ p.salida(array,t, suma);
	
	//~ return 0;
//~ }

//~ void segundo::leer(char cad[]){
	//~ cout<<"Digite nombre: ";
	//~ cin.getline(cad,50);
//~ }
//~ void segundo::ver(char frase[]){
	//~ for(int i=0; frase[i];i++){
		//~ cout<<frase[i]<<" ";
	//~ }
//~ }

//~ int main(int argc, char **argv)
//~ {
	//~ segundo s;
	//~ char nom[50];
	//~ s.leer(nom);
	//~ s.ver(nom);
//~ }

void tercero::entrada (int a[][3], int x){
	for(int i=0; i<x;i++){
		for(int j=0;j<x;j++){
			cout<<"Digite el dato ["<<i<<"]["<<j<<"] de la matriz: ";
			cin>>a[i][j];
			}
		}
}

void tercero::proceso (int b[][3], int y, float *prom){
	float sum=0;
	
	for(int i=0;i<y;i++){
		for(int j=0;j<y;j++){
			sum = sum + b[i][j];
			}
		}
	*prom = sum/(y*y);
}

void tercero::salida (int c[][3], int z, float *prom){
	cout<<"-------------------------------------------"<<endl<<"Resultado:"<<endl;
	cout<<"Matriz digitada: "<<endl;
	for(int i=0;i<z;i++){
		for(int j=0;j<z;j++){
			cout<<"\t"<<c[i][j];
			}
			cout<<endl;
		}
		cout<<"El promedio de la matriz es : "<<*prom<<endl;
}

int main(int argc, char **argv)
{
	float prom;
	tercero t;
	int matriz[3][3];
	int n=3;
	t.entrada(matriz, n);
	t.proceso(matriz, n, &prom);
	t.salida(matriz, n, &prom);
	
	return 0;
}

