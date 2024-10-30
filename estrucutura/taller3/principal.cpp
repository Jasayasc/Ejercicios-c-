#include "lista.h"

//Lo uso de esta forma debido a que en producto ya esta inluida la libreria iostream
using std::cin;

#include <windows.h> //Para que funcione el sleep 

#include <conio.h> //Para tomar el valor de la tecla pulsada con la funcion getch()

#include <fstream>
using std::ifstream;
using std::ofstream;
using std::ios;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu(lista);

void leer(string d, lista &x){
	ifstream archivo(d.c_str());
	string m;
	int p;
	while(!archivo.eof()){
		archivo>>m>>p;
		producto a(m,p);
		x.insertarInicio(a);
	}
}

void guardar(lista x){
	ofstream salida("datosLista.txt", ios::out);
	nodo* aux = x.getprimerPtr();
	if(x.getprimerPtr()==0)
		cout<<"No hay nada para guardar";
	while(aux != 0) {
		salida<<aux->getValor().getNombre()<<" "<<aux->getValor().getPrecio()<<endl;
		aux = aux->getSiguientePtr();
	}
	salida.close();
}


int main(int argc, char** argv) {
	lista mercado;
	menu(mercado);
	return 0;
}

void menu(lista mercado){
	char autorizacion;
	int resp, pre;
	string nom;
	system("cls");
	cout<<"1. Leer Datos"<<endl<<"2. Mostrar Datos"<<endl<<"3. Insertar Inicio"<<endl<<"4. Insertar Final"<<endl;
	cout<<"5. Eliminar Inicio"<<endl<<"6. Eliminar Final"<<endl<<"7. Guardar Datos"<<endl<<"8. Salir"<<endl<<": ";
	cin>>resp;
	if(resp==1){
		leer("datosP.txt", mercado);
		menu(mercado);
	}
	if(resp==2){
		cout<<"---------------------------------------------------"<<endl<<"Datos en la lista:";
		mercado.mostrar();
		cout<<"Presione s/S para continuar";
		autorizacion = getch();
		if(autorizacion=='S' or autorizacion=='s'){
			menu(mercado);
		}
	}
	if(resp==3){
		cout<<"Nombre de lo que desea insertar: ";cin>>nom;
		cout<<"Precio de lo que desea insertar: ";cin>>pre;
		producto a(nom,pre);
		mercado.insertarInicio(a);
		cout<<"Insertado con exito..";
		sleep(2);
		menu(mercado);
	}
	if(resp==4){
		cout<<"Nombre de lo que desea insertar: ";cin>>nom;
		cout<<"Precio de lo que desea insertar: ";cin>>pre;
		producto b(nom,pre);
		mercado.insertarFinal(b);	
		cout<<"Insertado con exito..";
		sleep(2);
		menu(mercado);
	}
	if(resp==5){
		mercado.eliminarInicio();
		cout<<"Primer elemento eliminado con exito..";
		sleep(2);
		menu(mercado);
	}
	if(resp==6){
		mercado.eliminarFinal();
		cout<<"Ultimo elemento eliminado con exito..";
		sleep(2);
		menu(mercado);
	}
	if(resp==7){
		guardar(mercado);
		menu(mercado);
	}
	if(resp==8){
		exit(0);
	}	
}