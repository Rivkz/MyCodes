/*
Escriba un programa que pida un número n y realice la suma 1+2+3…+n
Autor: Brian Ezequiel Riveiro
*/
#include<stdio.h>
#include<conio.h>

int main(){
	int n, cont=0, i=0;
	
	printf("imprima un numero:");
	scanf("%i", &n);
	
	while(i<=n){
		
		cont = cont + i;
		
		i++;
	   
	}
	printf("su resultado es: %i", cont);
	getch();
	return 0;
}