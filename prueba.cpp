#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n=0,c=0,x=0,z=0,k=0,e=0,sum=0;
	int digitos[20]={0};
	cout<<"Digite el numero: ";
	cin>>n;
	
	if(n>=10000){
		z = 10000;
		while(z>=1){
			k=n/z;
			digitos[c]=k;
			c++;
			n = n-(k*z);
			z = z/10;
		}
	}else if(n>=1000){
		z = 1000;
		while(z>=1){
			k=n/z;
			digitos[c]=k;
			c++;
			n = n-(k*z);
			z = z/10;
		}
	}else if(n>=100){
		z = 100;
		while(z>=1){
			k=n/z;
			digitos[c]=k;
			c++;
			n = n-(k*z);
			z = z/10;
		}
	}else if(n>=10){
		z = 10;
		while(z>=1){
			k=n/z;
			digitos[c]=k;
			c++;
			n = n-(k*z);
			z = z/10;
		}
	}else{
		cout<<n<<endl;
	}
	for(int j=0;j<c;j++){
		e = digitos[j]*digitos[j]*digitos[j];
		sum+=e;
	}
	cout<<endl<<"Sus digitos elevados al numero son: "<<sum<<endl;
	if(n==sum){
		cout<<"el numero es cubo perfecto";
	}

}

