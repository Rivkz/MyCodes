#include <stdio.h>
#include <conio.h>
#include <strings.h>

void main(){
	int edad;
	char n[255], s[255];
	
	printf("ingrese su nombre: ");
	gets(n);
	printf("\ningrese su sexo: ");
	gets(s);
	printf("\ningrese su edad: ");
	scanf("%i", &edad);
	
	if((strcmp(s, "femenino")==0)&&(edad>17)){
		printf("\n\n usted es de sexo %s", s);
	}
	else{
		printf("\n\nusted no es de sexo femenino, ni mayor de edad");
}
	getch();
}