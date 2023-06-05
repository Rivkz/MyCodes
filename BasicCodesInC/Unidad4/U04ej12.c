/*
En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:
•	Alumnos que aprobaron todos los exámenes
•	Alumnos que aprobaron por lo menos un examen
•	Alumnos que aprobaron únicamente el último examen
Autor: Brian Ezequiel Riveiro
*/
#include<stdio.h>
#include<conio.h>

int main(){
	int i, e1, e2, e3, at=0, am=0, au=0;
	
	for(i=1;i<=5;i++){
		printf("ingresar la nota del 1er examen: ");
		scanf("%i", &e1);
		printf("ingresar la nota del 2do examen: ");
		scanf("%i", &e2);
		printf("ingresar la nota del 3er examen: ");
		scanf("%i", &e3);
		if(e1>=7 && e2>=7 && e3>=7){
			at = at + 1;
		}if(e1>=7 || e2>=7 || e3>=7){
			am = am + 1;
		}if(e3>=7){
			au = au + 1;
}}

	printf("\n\nla cantidad de alumnos que aprobaron todos los examenes es de: %i", at);
	printf("\n\nla cantidad de alumnos que aprobaron al menos un examen es de: %i", am);
	printf("\n\nla cantidad de alumnos que aprobaron el ultimo examen es de: %i", au);
	getch();
	return 0;
}