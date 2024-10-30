#include <conio.h>
#include <stdio.h>

int main(){
	int op;
	for(int i=1;i<=5;i++){
		printf("\n \nDigite el numero del mes: ");
	scanf("%d", &op);
	
	switch(op){
		case 1: printf("El mes es enero \n");
		break;
		case 2: printf("El mes es febrero");
		break;
		case 3: printf("El mes es marzo");
		break;
		case 4: printf("El mes es abril");
		break;
		case 5: printf("El mes es mayo");
		break;
		case 6: printf("El mes es junio");
		break;
		case 7: printf("El mes es julio");
		break;
		case 8: printf("El mes es agosto");
		break;
		case 9: printf("El mes es septiembre");
		break;
		case 10: printf("El mes es octubre");
		break;
		case 11: printf("El mes es noviembre");
		break;
		case 12: printf("El mes es dicembre");
		break;
		
	}
	}
	
}