/*
Hacer un programa que le pida números al usuario hasta que se ingrese el número 0. 
En ese momento el programa debe terminar y mostrar la cantidad de números mayores a 0 que se han ingresado.
Autor: Brian Ezequiel Riveiro
*/
#include<stdio.h>
#include<conio.h>
#include<strings.h>

int main(){
	int n, suma=0;
	do{
		printf("\ningrese un numero:");
		scanf("%i", &n);
	if(n>0){
		suma++;
	}
	}while(n!=0);
	printf("la cantidad de numeros mayores fue de: %i", suma);
	
	getch();
	return 0;
}