#include <iostream>
using namespace std;

class A{
	public:
		int cuadrado(int);
		float cuadrado(float);	
		long cuadra (long);
	};

int A::cuadrado(int p){
	int r=0;
	r = p*p;
	return r;
	}

float A::cuadrado(float f){
	float r=0.0;
	r = f*f;
	return r;
	}
long A::cuadrado(long f){
	long r=0.0;
	r = f*f;
	return r;
	}

int main(int argc, char **argv)
{
	//~ int r1=25;
	float r2 = 2.5;
	A E;
	cout<<"cuadrado entero: "<<E.cuadrado(25)<<endl;
	cout<<"cuadrado decimal: "<<E.cuadrado(r2)<<endl;
	return 0;
}

