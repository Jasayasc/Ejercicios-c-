#include "lista.h"

lista::lista() {
	setprimerPtr(0);
	setultimoPtr(0);
}

lista::~lista() {
	;
}

void lista::setprimerPtr(nodo * p) {
	primerPtr = p;
}

void lista::setultimoPtr(nodo * u) {
	ultimoPtr = u;
}

nodo * lista::getprimerPtr() {
	return primerPtr;
}

nodo * lista::getultimoPtr() {
	return ultimoPtr;
}

void lista::imprimir() {
	cout<<"PrimerPtr = "<<getprimerPtr()<<endl;
	cout<<"UltimoPtr = "<<getultimoPtr()<<endl;
}

void lista::insertarFinal(producto a) {
	nodo* temp = new nodo(a);
	if(getultimoPtr()==0) {
		setprimerPtr(temp);
		setultimoPtr(temp);
	} else {
		ultimoPtr -> setSiguientePtr(temp);
		setultimoPtr(temp);


	}
}

void lista::insertarInicio(producto a) {
	nodo* temp = new nodo(a);
	if(getprimerPtr()==0) {
		setultimoPtr(temp);
		setprimerPtr(temp);
	} else {
		temp -> setSiguientePtr(getprimerPtr());
		setprimerPtr(temp);
	}
}

void lista::eliminarFinal() {
	nodo* aux = getprimerPtr();
	if(getprimerPtr()==0) {
		cout<<"La lista esta vacia"<<endl;
	} else {
		nodo * aux2= getultimoPtr();
		while(aux-> getSiguientePtr() != getultimoPtr()) {
			aux = aux->getSiguientePtr();
		}
		aux ->setSiguientePtr(0);
		setultimoPtr(aux);
		delete aux2;
	}
}

void lista::eliminarInicio() {
	nodo* aux = getprimerPtr();
	if(getultimoPtr()==0) {
		cout<<"La lista esta vacia"<<endl;
	} else {
		nodo * aux2= getprimerPtr();
		aux =aux ->getSiguientePtr();
		setprimerPtr(aux);
		delete aux2;
	}
	
}

void lista::mostrar() {
	cout<<endl;
	nodo* aux = getprimerPtr();
	if(getprimerPtr()==0)
		cout<<"La estructura esta vacia"<<endl;
	while(aux != 0) {
		aux->getValor().imprimir();
		aux = aux->getSiguientePtr();
	}
}

