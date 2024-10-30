#ifndef NODO_H
#define NODO_H
#include "producto.h"


class nodo
{
	private:
		producto valor;
		nodo * siguientePtr;
	public:
		nodo();
		nodo(producto);
		~nodo();
		void setValor(producto);
		void setSiguientePtr(nodo *);
		producto getValor();
		nodo * getSiguientePtr();
		void imprimir();
	protected:
};

#endif
