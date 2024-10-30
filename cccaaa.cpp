#include <conio.h>
#include <stdio.h>
int main(){
	int op,a,b;
	for(int i=1;i<=10;i++){
		printf("Cual es el valor de la moto?\n");
		scanf("%d", &a);
		printf("Que dia la comprara?\n");
		printf("1. Es dia Martes \n");		
		printf("2. Es dia Sabado \n");
		printf("1. Es dia Feriado \n");
		scanf("%d", &op);
		switch (op){
			case 1: 
			b=a-(a*0.10);
			printf("%d", b);		
		}
	}
}
