/*
Hacer un programa que descomponga un número ingresado por teclado en sus factores primos.
Autor: Brian Ezequiel Riveiro
*/
#include<stdio.h>
#include<conio.h>

int main(){
	int Ni, i;
	
	printf("ingrese un numero:");
	scanf("%i", &Ni);
	for(i=2;Ni>1;i++){
	while(Ni%i==0){
			printf("*%i", i);
			Ni = Ni / i;
	}}		
	getch();
	return 0;
}
