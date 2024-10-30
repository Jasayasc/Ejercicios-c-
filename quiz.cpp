/* dada una cantidada de numeros enteros decir cual es el mayor de todos esos numeros digitados y el menor y cual es la
es la suma de los numeros comprendidos entre 20 y 50 (incluyendolos) */
#include <conio.h>
#include <stdio.h>

int main(){
	int a,b,c,m=0,n=0;
	printf("Cuantos numeros piensa digitar?\n");
	scanf("%d", &a);
	printf("Ingrese los numeros\n");
	for(int i=1;i<=a;i++){
		scanf("%d", &b);
		if(i==1){
			m=b;
			n=b;
		
		}
		if(b>m){
			m=b;
		}
		
		if(b<n){
			n=b;
		}
		if(b<=50 and b>=20){
			c=c+b;
		}
	}
	
	printf("La suma de los numeros entre 20 y 50 es %d \n", c);
	printf("El mayor es %d\n",m);
	printf("El menor es %d \n",n);
}
