/*
Hacer un programa que descomponga un número ingresado por teclado en sus factores primos.
Autor: Brian Ezequiel Riveiro
*/
#include<stdio.h>
#include<conio.h>

int main(){
	int Ni, i=2;
	
	printf("ingrese un numero:");
	scanf("%i", &Ni);
	
	while(Ni%i==0){
			printf("\n%i", i);
			Ni = Ni / i;
			i++;
	}		
	getch();
	return 0;
}