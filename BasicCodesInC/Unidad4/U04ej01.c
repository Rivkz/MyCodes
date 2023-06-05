/*
Realizar un programa que pida al usuario un número y muestre su tabla de multiplicar hasta el 10
Autor: Brian Ezequiel Riveiro
*/
#include<stdio.h>
#include<conio.h>

int main(){
	int n, cont, i;
	
	printf("ingrese un numero:");
	scanf("%i", &n);
	
	for(i=1;i<=10;i++){
		
		cont=n*i;
		printf("%i\n", cont);
}
	getch();
	return 0;
}