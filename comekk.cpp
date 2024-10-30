#include <conio.h>
#include <stdio.h>
int main(){
	int op,M=0,S=0,F=0,c=0;
	float a,b;
	for(int i=1;i<=10;i++){
		c+=1;
		printf("-------- Cliente Numero %d --------\n", c);
		printf("Cual es el valor de la moto?\nR:");
		scanf("%f", &a);
		printf("Que dia la comprara?\n");
		printf("1. Es dia Martes \n");		
		printf("2. Es dia Sabado \n");
		printf("3. Es dia Feriado \nR:");
		scanf("%d", &op);
		switch (op){
			case 1: 
			b=a-(a*0.10);
			printf("el valor de la moto quedaria con el 10 por ciento de descuento y seria de $%.2f \n \n", b);
			M+=1;
			break;
			case 2: 
			b=a-(a*0.19);
			printf("el valor de la moto quedaria con el 19 por ciento de descuento y seria de $%.2f \n \n", b);
			S+=1;
			break;
			case 3: 
			b=a-(a*0.23);
			printf("el valor de la moto quedaria con el 23 por ciento de descuento y seria de $%.2f \n \n", b);
			F+=1;
			break;
			
		}
	}
	printf("\n%d clientes comprarian su moto el dia Martes\n", M);
	printf("%d clientes comprarian su moto el dia Sabado\n", S);
	printf("%d clientes comprarian su moto el dia Feriado\n", F);
	return 0;
}
