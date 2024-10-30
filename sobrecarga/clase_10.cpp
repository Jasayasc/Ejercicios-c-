#include <iostream>
using namespace std;

class coords{
	int x, y;
	public:
		coords();
		~coords();
		coords(int, int);
		coords operator+(coords);
		coords operator-(coords);
		void poner(int &,int &);
	
	};
	
coords::coords(){
	cout<<"sin: "<<endl;
	x=y=0;
	}
	
coords::~coords(){
	cout<<"destruirrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr"<<endl;
	
}
	
coords::coords(int m, int n){
	cout<<"con: "<<endl;
	x=m;
	y=n;
}

coords coords::operator+(coords uno){
	coords temp;
	temp.x = x+uno.x;
	temp.y= y+uno.y;
	return temp;
	
}		

coords coords::operator-(coords dos){
	coords aux;
	aux.x = x-dos.x;
	aux.y= y-dos.y;
	return aux;
	
}		

void coords::poner(int &p, int &q){
	p=x;
	q=y;
	
}

int main(int argc, char **argv)
{
	coords A(12,25), B(14,-15),C;
	int x,y;
	C = A+B;
	C.poner(x,y);
	cout<<" Suma x = "<<x<<"  , Suma y = "<<y<<endl;
	C =A-B;
	C.poner(x,y);
	cout<<" Resta x = "<<x<<"  , Resta y = "<<y<<endl;
	return 0;
}

