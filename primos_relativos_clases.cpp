#include <iostream>
using namespace std;

class primos{
	private:
		int numero_1,numero_2,contador_1,contador_2;
		int divisor_1[20];
		int divisor_2[20];
	public:
		primos();
		~primos();
		void entrada(void);
		void proceso(void);
		void salida(void);
};

primos::primos(){
	numero_1=0;
	numero_2=0;
	contador_1=0;
	contador_2=0;
	divisor_1[20]={0};
	divisor_2[20]={0};
}
primos::~primos(){
}

void primos::entrada(void){
	cout<<"Digite el primer numero: ";
	cin>>numero_1;
	cout<<"Digite el segundo numero: ";
	cin>>numero_2;
}

void primos::proceso(void){
	for(int i=1;i<=numero_1;i++){
		if(numero_1%i==0){
			divisor_1[contador_1]=i;
			contador_1++;
		}
	}
	for(int i=1;i<=numero_2;i++){
		if(numero_2%i==0){
			divisor_2[contador_2]=i;
			contador_2++;
		}
	}
}

void primos::salida(void){
	cout<<"Los divisores del primer numero son: ";
	for(int i=0;i<contador_1;i++){
		cout<<divisor_1[i]<<" ";
	}
	cout<<endl;
	cout<<"Los divisores del segundo numero son: ";
	for(int i=0;i<contador_2;i++){
		cout<<divisor_2[i]<<" ";
	}
	for(int i=1;i<20;i++){
		if(divisor_2[i]!=divisor_1[i]){
			cout<<endl<<"son primos relativos";
		}
	}
}
int main(){
	primos relativos;
	relativos.entrada();
	relativos.proceso();
	relativos.salida();
}
