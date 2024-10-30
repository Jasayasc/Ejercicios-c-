#include <iostream>
using namespace std;
// Declaracion y definicion de clase
class vocal{
	private: //Declaracion de variables globales
		char palabra[25]={0};
		int VocalA[10]={0};
		int VocalE[10]={0};
		int VocalI[10]={0};
		int VocalO[10]={0};
		int VocalU[10]={0};
		int contadorA=0;
		int contadorE=0;
		int contadorI=0;
		int contadorO=0;
		int contadorU=0;
	public: //Declaracion de funciones
		void entrada(void);
		void proceso(void);
		void salida(void);
};
//Definicion de funciones
void vocal::entrada(void){
	cout<<"Ingrese la frase: ";
	cin.getline(palabra, 25, '\n');
}

void vocal::proceso(void){
	for(int x=0; x<25;x++){
		if(palabra[x]=='a' or palabra[x]=='A'){
		VocalA[contadorA]=x;
		contadorA++;
		}
	}
	for(int x=0; x<25;x++){
		if(palabra[x]=='e' or palabra[x]=='E'){
		VocalE[contadorE]=x;
		contadorE++;
		}
	}
	for(int x=0; x<25;x++){
		if(palabra[x]=='i' or palabra[x]=='I'){
		VocalI[contadorI]=x;
		contadorI++;
		}
	}
	for(int x=0; x<25;x++){
		if(palabra[x]=='o' or palabra[x]=='O'){
		VocalO[contadorO]=x;
		contadorO++;
		}
	}
	for(int x=0; x<25;x++){
		if(palabra[x]=='u' or palabra[x]=='U'){
		VocalU[contadorU]=x;
		contadorU++;
		}
	}
}

void vocal::salida(void){
	cout<<endl<<"-------------------------------------------"<<endl<<"Resultados del analisis de la frase"<<endl<<"-------------------------------------------"<<endl;
	cout<<"Frase separada por letras: ";
	for(int j=0;j<25;j++){
		cout<<palabra[j]<<"  ";
	}
	cout<<endl;
	cout<<"Vocal A:"<<endl;
	cout<<"\tRepeticiones: "<<contadorA<<endl;
	cout<<"\tPosicion:";
	for(int i=0; i<contadorA;i++){
		cout<<VocalA[i]<<"   ";
	}
	cout<<endl<<"-------------------------------------------"<<endl;
	cout<<"Vocal E:"<<endl;
	cout<<"\tRepeticiones: "<<contadorE<<endl;
	cout<<"\tPosicion:";
	for(int i=0; i<contadorE;i++){
		cout<<VocalE[i]<<"   ";
	}
	cout<<endl<<"-------------------------------------------"<<endl;
	cout<<"Vocal I:"<<endl;
	cout<<"\tRepeticiones: "<<contadorI<<endl;
	cout<<"\tPosicion:";
	for(int i=0; i<contadorI;i++){
		cout<<VocalI[i]<<"   ";
	}
	cout<<endl<<"-------------------------------------------"<<endl;
	cout<<"Vocal O:"<<endl;
	cout<<"\tRepeticiones: "<<contadorO<<endl;
	cout<<"\tPosicion:";
	for(int i=0; i<contadorO;i++){
		cout<<VocalO[i]<<"   ";
	}
	cout<<endl<<"-------------------------------------------"<<endl;
	cout<<"Vocal U:"<<endl;
	cout<<"\tRepeticiones: "<<contadorU<<endl;
	cout<<"\tPosicion:";
	for(int i=0; i<contadorU;i++){
		cout<<VocalU[i]<<"   ";
	}
}

int main(){
	//declaracion de objeto
	vocal vocales;
	//llamado de funciones
	vocales.entrada();
	vocales.proceso();
	vocales.salida();
	return 0;
}