/*Realizar un algoritmo que permita digitar por teclado 15 números y que los visualice por
la pantalla del menor al mayor de los números digitados.*/
#include <conio.h>
#include <stdio.h>

int main(){
	
	int a[5],j, i;
	
	for(i=0;i<=4;i++){
		scanf("%d", &j);
		a[i]=j;
	
	}
	int x,y;
	for(i=0;i<4;i++){
		for(j=i+1;j<4;j++){
			x=a[i]-a[j];
			if(x>0){
				y=a[j];
				a[j]=a[i];
				a[i]=y;
			}
		}
	}	
	
	printf("\n\n los numeros ordenados de menor a mayor son: \n");
	for(i=0;i<=4;i++){
		printf("%d ", a[i]);
	}
}