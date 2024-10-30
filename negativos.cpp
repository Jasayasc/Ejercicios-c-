#include <conio.h>
#include <stdio.h>

int main(){
	int a,b,c;
	printf("Ingrese valores a sumar (Solo se sumaran los negativos) \n");
	while(c<=10){
		scanf("%d", &a);
			if (a<0){
				b=b+a;
			}
		c+=1;
	}
	printf("La suma de los negativos es %d", b);
}
