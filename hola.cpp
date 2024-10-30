#include <conio.h>
#include <stdio.h>
#include <string.h>



int main(){
	int ch,cm,c=1,e,mayor,juvenil, sardinos;
	char hombre='m',mujer='f',s;
	for(c = 1; c<=10; c++){
		
		printf("Si eres hombre escribre (m) si eres mujer escribe (f)\n");
		scanf("%c", &s);
			if (s == mujer){
				cm+=1;
				printf("Ingrese su edad\n");
				scanf("%d", e);
					if (e>20){
						mayor+=1;				
					}
					else{
						if(e<21 & e>15){
							juvenil+=1;
						}
						else{
							if(e<16 & e>11){
							sardinos+=1;
							}
						}
					}
			}
			else{
				if(s == hombre){
					ch+=1;
					printf("Ingrese su edad\n");
					scanf("%d", e);
					if (e>20){
					mayor+=1;				
					}
					else{
						if(e<21 & e>15){
							juvenil+=1;
						}
						else{
							if(e<16 & e>11){
								sardinos+=1;
							}
						}
					}
				}
			}
	
	}
	printf("Hay un total de socios de %d \nDe ellos %d son masculinos \nDe ellos %d son femeninas \n", c, ch, cm);
	printf("De ellos %d son mayores, %d son juveniles y %d son sardinos", mayor, juvenil,sardinos);
	
	return 0;
}
