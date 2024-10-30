#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
using std::cout;
using std::endl;


#include <string>
using std::string;

class producto
{
	string nombre;
	int precio;
	public:
		producto();
		producto(string, int);
		~producto();
		void setNombre(string);
		void setPrecio(int);
		string getNombre();
		int getPrecio();
		void imprimir();
	protected:
};

#endif
