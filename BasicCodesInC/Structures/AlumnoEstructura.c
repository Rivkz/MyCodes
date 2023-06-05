#include <stdio.h>
#include <conio.h>
#include <strings.h>

struct alumno{
	char nombre[30];
	int edad;
	float promedio;
}A1, A2, A3;

int main(){
	
	printf("\ningrese el nombre: ");
	fgets(A1.nombre, 30, stdin);
	
	printf("ingrese la edad: ");
	scanf("%i", &A1.edad);
	
	printf("ingrese el promedio: ");
	scanf("%f", &A1.promedio);

	getchar();
	
	printf("\ningrese el nombre: ");
	fgets(A2.nombre, 30, stdin);
	
	printf("ingrese la edad: ");
	scanf("%i", &A2.edad);
	
	printf("ingrese el promedio: ");
	scanf("%f", &A2.promedio);
	
	getchar();
	
	printf("\ningrese el nombre: ");
	fgets(A3.nombre, 30, stdin);
	
	printf("ingrese la edad: ");
	scanf("%i", &A3.edad);
	
	printf("ingrese el promedio: ");
	scanf("%f", &A3.promedio);

	if(A1.promedio > A2.promedio && A1.promedio > A3.promedio){
		
		printf("\nEl alumno con mayor promedio es: %s",A1.nombre);
		printf("la edad es: %i",A1.edad);
		printf("\nsu promedio es: %f",A1.promedio);
	}if(A2.promedio > A3.promedio && A2.promedio > A1.promedio){
		
		printf("\nEl alumno con mayor promedio es: %s",A2.nombre);
		printf("la edad es: %i",A2.edad);
		printf("\nsu promedio es: %f",A2.promedio);	
	}if(A3.promedio > A2.promedio && A3.promedio > A1.promedio){
		
		printf("\nEl alumno con mayor promedio es: %s",A3.nombre);
		printf("la edad es: %i",A3.edad);
		printf("\nsu promedio es: %f",A3.promedio);
	}
	getch();
	return 0;
}