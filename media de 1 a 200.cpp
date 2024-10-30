#include <iostream>
using namespace std;
int main(){
	int a, b, c, d, par=1, impar=1;
	for (int i = 1; i<=200; i++){
		if (i%2==0){
			a=a+i;
			par+=1;
			b=a/par;
			
		}
		if(i%3==0){
			c=i+c;
			impar+=1;
			d=c/impar;
			
		}
	}
	
	cout << "La suma de los pares son " << a << endl;
	cout << "La media de los pares son " << b <<endl;
	cout << "\nLa suma de los impares son " << c << endl;
	cout << "La media de los impares son " << d <<endl;
}
