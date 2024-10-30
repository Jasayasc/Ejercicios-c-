#include <iostream>
#include <iomanip>
using namespace std;
class paradoja{
	private:
		int cantidad;
		float no_cumplen,probabilidad_si;
	public:
		paradoja();
		~paradoja();
		void entrada(void);
		void proceso(void);
		void salida(void);
}cumple;

paradoja::paradoja(){
	cantidad =0;
	no_cumplen=0;
	probabilidad_si=1.0;
}

paradoja::~paradoja(){}

void paradoja::entrada(void){
	cout<<"Digite la cantidad de personas: ";
	cin>>cantidad;
}

void paradoja::proceso(void){
	for(int i=0;i<cantidad;i++){
		probabilidad_si=probabilidad_si*(365-i)/365;
		no_cumplen=probabilidad_si;
	}
	probabilidad_si=100*(1-probabilidad_si);
}
void paradoja::salida(void){
	cout<<"El "<<setprecision(4)<<no_cumplen*100<<"% no cumplen el mismo dia"<<endl;
	cout<<"Existe el "<<setprecision(4)<<probabilidad_si<<"%  de que en el grupo de "<<cantidad<<", 2 personas cumplan el mismo dia"<<endl;
}

int main(){
	cumple.entrada();
	cumple.proceso();
	cumple.salida();
	return 0;
}