/*
Escribir un programa que calcule la serie de Fibonacci hasta el número n (ingresado por teclado)
Autor: Brian Ezequiel Riveiro
*/
#include<stdio.h>
#include<conio.h>

int main(){
	int i, cont, n1=0, n2=1, n3=1;
	
	printf("ingrese el numero de las sumas de fibonacci que desee:");
	scanf("%i", &cont);
	printf("\n0\n1");
	for(i=0;i<=cont-2;i++){
		
		n3=n1+n2;
		n1=n2;
		n2=n3;
		
		printf("\n%i", n3);
	}
	getch();
	return 0;
}