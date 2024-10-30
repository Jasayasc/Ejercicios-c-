#include <iostream>
using namespace std;
// Declaracion y definicion de clase
class divisores{
	private: //Declaracion de variables globales
		int numero1;
		int numero2;
		int divisores1[20]={0};
		int divisores2[20]={0};
		int contador1=0;
		int contador2=0;
	public: //Declaracion de funciones
		void entrada(void);
		void proceso(void);
		void salida(void);
};
//Definicion de funciones
void divisores::entrada(void){
	cout<<"Ingrese un numero: ";
	cin>>numero1;
	cout<<"Ingrese otro numero: ";
	cin>>numero2;
}

void divisores::proceso(void){
	for(int i=1;i<=numero1;i++){
		if(numero1%i==0){
			divisores1[contador1]=i;
			contador1++;
		}
	}
	for(int j=1;j<=numero2;j++){
		if(numero2%j==0){
			divisores2[contador2]=j;
			contador2++;
		}
	}
}

void divisores::salida(void){
	cout<<"Los divisores de "<<numero1<<" son: ";
	for(int i=0;i<=contador1-1;i++){
		cout<<divisores1[i]<<"\t";
	}
	cout<<endl;
	
	cout<<"Los divisores de "<<numero2<<" son: ";
	for(int j=0;j<=contador2-1;j++){
		cout<<divisores2[j]<<"\t";
	}
	cout<<endl;
	
	if(contador1<contador2){
		cout<<numero2<<" tiene mas divisores que "<<numero1<<endl;
	}
	if(contador2<contador1){
		cout<<numero1<<" tiene mas divisores que "<<numero2<<endl;
	}
	if(contador2==contador1){
		cout<<numero1<<" tiene misma cantidad de divisores que "<<numero2<<endl;
	}
}

int main(){
	//declaracion de objeto
	divisores divisor;
	//llamado de funciones
	divisor.entrada();
	divisor.proceso();
	divisor.salida();
	return 0;
}