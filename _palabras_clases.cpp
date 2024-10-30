#include <iostream>
using namespace std;

class palabra{
	private:
		char frase[40];
		char palabra_cambiada[40];
		int mayusculas;
	public:
		palabra();
		~palabra();
		void entrada(void);
		void proceso(void);
		void salida(void);
}inversa;

palabra::palabra(){
	frase[40] = {0};
	palabra_cambiada[40]={0};
	mayusculas=0;
}

palabra::~palabra(){}

void palabra::entrada(void){
	cout<<"Digite una frase: ";
	cin.getline(frase, 40, '\n');
}

void palabra::proceso(void){
	for(int i=0;i<40;i++){
		if((int)frase[i]<=90 and (int)frase[i]>=65){
			mayusculas = (int)frase[i] + 32;
			palabra_cambiada[i] = (char)mayusculas;
		}
		if((int)frase[i]>=97 and (int)frase[i]<=122){
			mayusculas = (int)frase[i] - 32;
			palabra_cambiada[i] = (char)mayusculas;
		}
		mayusculas=0;
	}
}

void palabra::salida(void){
	cout<<"------------------------------------------------------------------------------"<<endl<<"RESULATADO DE LA CONVERSION DE MINUSCULAS A MAYUSCULAS Y VICEVERSA";
	cout<<endl<<"------------------------------------------------------------------------------"<<endl;
	for(int j=0;j<40;j++){
		cout<<palabra_cambiada[j];
	}
}

int main(){
	inversa.entrada();
	inversa.proceso();
	inversa.salida();
	return 0;
}