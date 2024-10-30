#include <iostream>
#include <string.h>
using namespace std;


class cadena{
	char frase[180];
	public:
	cadena(char *);
	void operator+(char *);
	void operator-(char);
	void Imprimir(void);
	};
	
cadena::cadena(char* uno){
strcpy(frase,uno);
}	

void cadena::operator+(char * dos){
strcat(frase,dos);
}
void cadena::operator-(char letra){
char temp[180];
int i,j;
for(i=0,j=0;frase[i];i++)
	if(frase[i]!=letra)
		temp[j++]=frase[i];
	temp[j++]=NULL;	
strcat(frase,temp);
}

void cadena::Imprimir(void){
cout<<frase<<endl;
}

int main(){
cadena A("Sobrecarga de operadores");
A.Imprimir();
A+" Programados en  compilador libre c++";
A.Imprimir();
A-'r';
A.Imprimir();
return 0;
}

