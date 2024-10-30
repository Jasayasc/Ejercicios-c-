#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"

#include <string>
using std::string;


class lista
{
	private:
		nodo* primerPtr;
		nodo* ultimoPtr;
	public:
		lista();
		~lista();
		void setprimerPtr(nodo*);
		void setultimoPtr(nodo*);
		nodo* getprimerPtr();
		nodo* getultimoPtr();
		void imprimir();

		void insertarFinal(producto);
		void insertarInicio(producto);
		void eliminarFinal();
		void eliminarInicio();
		
		void mostrar();
	protected:
};

#endif
