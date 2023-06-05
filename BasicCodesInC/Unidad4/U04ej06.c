/*
Diseñar un programa que eleve un número x a un exponente y, sin usar la función pow()
Autor: Brian Ezequiel Riveiro
*/
#include<stdio.h>
#include<conio.h>

int main(){
	int x, y, i, resultado;
	
	printf("ingrese el numero que quiere elevar: ");
	scanf("%i", &x);
	printf("\ningrese su exponente: ");
	scanf("%i", &y);
	
	resultado=x;
	if(y==0){
		printf("\nel resultado es 1");
		getch();
		return 0;
	}
	
	while(y>1){
		
		resultado = resultado * x;
		
		y--;
	}
	
	printf("\nel resultado es: %i", resultado);
	getch();
	return 0;
}