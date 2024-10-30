#include <iostream>
#include <conio.h>
using namespace std;

class datos{
	public:
	struct estudiante{
		estudiante *students;
		char nom[40];
		int cod,t;
		float nota[6];
		float porcentaje[6];
		float prom;
		float prom_p;
		};
		void inicializar(estudiante *);
		void entrada(estudiante *);
		void proceso(estudiante *);
		void salida (estudiante *);
	};

void datos::inicializar(estudiante *pilo){
	pilo->prom=0;
	pilo->prom_p = 0;
	pilo->porcentaje[0] = 0.1;
	pilo->porcentaje[1] = 0.25;
	pilo->porcentaje[2] = 0.2;
	pilo->porcentaje[3] = 0.15;
	pilo->porcentaje[4] = 0.2;
	pilo->porcentaje[5] = 0.1;
	
	cout<<"Cuantos alunmos desea ingresar: ";
	cin>>pilo->t;
	pilo->students = new estudiante[pilo->t];
	if(pilo->students == NULL)
		cout<<"Error";
}

void datos::entrada(estudiante *pilo){
	for(int j =0;j<pilo->t;j++){
		cout<<"Nombre del estudiante ["<<j+1<<"]: ";
		getchar();
		cin.getline(pilo->nom, 40);
		cout<<"Codigo del estudiante ["<<j+1<<"]:";
		cin>>pilo->cod;
		for(int i=0;i<6;i++){
			cout<<"Digite nota["<<i+1<<"]: ";
			cin>>pilo->nota[i];
			if(pilo->nota[i]<0.0 or pilo->nota[i]>5.0){
				cout<<"Error nota fuera del rango"<<endl;
				i = i-1;
			}
		}
		pilo->students[j] = *pilo;
		system("cls");
	}
}

void datos::proceso(estudiante *pilo){
	for(int i=0;i<pilo->t;i++){
		*pilo = pilo->students[i];
		for(int j =0;j<6;j++){
			pilo->prom = pilo->prom + pilo->nota[j];
		}
		pilo->prom = pilo->prom / 6;
		for(int x =0; x<6; x++){
			pilo->porcentaje[x] = pilo->porcentaje[x]*pilo->nota[x];
			pilo->prom_p = pilo->prom_p + pilo->porcentaje[x];
		}
		pilo->students[i] = *pilo;
	}
}

void datos::salida(estudiante *pilo){
	for(int j = 0; j<pilo->t;j++){
		*pilo  = pilo->students[j];
		system("cls");
		cout<<"Nombre: "<<pilo->nom<<endl;
		cout<<"Codigo: "<<pilo->cod<<endl;
		for(int i=0;i<6;i++){
			cout<<"Nota ["<<i+1<<"]: "<<pilo->nota[i]<<endl;
		}
		cout<<"Promedio aritmetico: "<<pilo->prom<<endl;
		cout<<"Promedio ponderado: "<<pilo->prom_p<<endl;
		if(pilo->t>1){
			char resp;
			cout<<"Digite s/S para continuar....";
			resp = getch();
			if(resp == 's' or resp == 'S')
				continue;
			if(resp != 's' or resp != 'S')
				j=j-1;
		}
	}
	delete pilo->students;
}

int main(){
	datos::estudiante pilo;
	datos x;
	x.inicializar(&pilo);
	x.entrada(&pilo);
	x.proceso(&pilo);
	x.salida(&pilo);
	}
