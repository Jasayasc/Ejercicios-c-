#include "producto.h"


producto::producto()
{
	setNombre("N/A");
	setPrecio(0);
}
producto::producto(string n, int p)
{
	setNombre(n);
	setPrecio(p);
}
producto::~producto()
{
	;
}

void producto::setNombre(string n){
	nombre = n;
}
void producto::setPrecio(int p){
	precio = p;
}
string producto::getNombre(){
	return nombre;
}
int producto::getPrecio(){
	return precio;
}
void producto::imprimir(){
	cout<<getNombre()<<"   "<< getPrecio()<<endl;
}
