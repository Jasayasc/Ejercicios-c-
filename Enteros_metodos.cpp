#include <iostream>
using namespace std;
// Declaracion y definicion de clase
class enteros{
	private: //Declaracion de variables globales
		int numero1;
		int numero2;
		int suma=0;
		int pares[20]={0};
		int impares[20]={0};
		int contadorPar=0;
		int contadorImpar=0;
	public: //Declaracion de funciones
		void entrada(void);
		void proceso(void);
		void salida(void);
};
//Definicion de funciones
void enteros::entrada(void){
	cout<<"Ingrese el primer numero: ";
	cin>>numero1;
	cout<<"Ingrese el segundo numero: ";
	cin>>numero2;
}

void enteros::proceso(void){
	if(numero1>numero2){
		for (int i=numero2;i<=numero1;i++){
		suma+=i;
		}
		
		for(int j=numero2;j<=numero1;j++){
			if(j%2==0){
				pares[contadorPar]=j;
				contadorPar++;
			}
			if(j%3==0){
				impares[contadorImpar]=j;
				contadorImpar++;
			}
		}
	}
	else{
		for (int i=numero1;i<=numero2;i++){
		suma+=i;
		}
		
		for(int j=numero1;j<=numero2;j++){
			if(j%2==0){
				pares[contadorPar]=j;
				contadorPar++;
			}
			if(j%3==0){
				impares[contadorImpar]=j;
				contadorImpar++;
			}
		}
	}
}

void enteros::salida(void){
	if(numero1>numero2){
		cout<<"La suma de los numero entre "<<numero2<<" y "<<numero1<<" es: "<<suma<<endl;
		cout<<"Los numero pares entre "<<numero2<<" y "<<numero1<<" son: ";
		for(int i=0;i<contadorPar;i++){
			cout<<pares[i]<<"\t";
		}
		cout<<endl;
		cout<<endl<<"Los numeros impares entre "<<numero2<<" y "<<numero1<<" son: ";
		for(int j=0;j<contadorImpar;j++){
			cout<<impares[j]<<"\t";
		}
	}
	else{
		cout<<"La suma de los numero entre "<<numero1<<" y "<<numero2<<" es: "<<suma<<endl;
		cout<<"Los numero pares entre "<<numero1<<" y "<<numero2<<" son: ";
		for(int i=0;i<contadorPar;i++){
			cout<<pares[i]<<"\t";
		}
		cout<<endl;
		cout<<endl<<"Los numeros impares entre "<<numero1<<" y "<<numero2<<" son: ";
		for(int j=0;j<contadorImpar;j++){
			cout<<impares[j]<<" \t";
		}
	}
}

int main(){
	//declaracion de objeto
	enteros contar;
	//llamado de funciones
	contar.entrada();
	contar.proceso();
	contar.salida();
	return 0;
}