#include <conio.h>
#include <stdio.h>

int main(){
	int a, b=1, c;
	while(b<=100){
		a=b*b;
		c=a+c;
		printf("%d x %d = %d \n",b,b,a);
		b+=1;
	}
	
	printf("La suma de los cuadrados es %d", c);
}
