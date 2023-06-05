/*
Escriba un programa que pida un número n y realice la suma de los números impares desde 1 hasta n.
Autor: Brian Ezequiel Riveiro
*/
#include<stdio.h>
#include<conio.h>
#include<strings.h>

int main(){
	int n, i=0, cont, x=0, nn;
	
	printf("ingresar un numero:");
	scanf("%i", &n);
	
	while(i<=n){
		
	nn = i%2;
	
	if(nn>0){
		
		x = x + i;
	}
	i++;
}
	printf("la suma de los impares es %i", x);
	getch();
	return 0;
}