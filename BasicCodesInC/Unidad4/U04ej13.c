/*
Realice un programa que solicite al usuario un número entre 1 y 100. 
El programa debe generar un número aleatorio en ese mismo rango [1-100] 
e indicarle al usuario si el número que digitó es menor o mayor al número aleatorio, hasta que lo adivine. 
Por último, deberá mostrarle el número de intentos que le llevó.
Autor: Brian Ezequiel Riveiro
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int Na, Ns, ContInt=0;
	
	srand (time(NULL));
	Na = rand() % 100 + 1;
	do{
		printf("\ningrese un numero del 1 al 100:");
		scanf("%i", &Ns);
		if(Ns>Na){
			printf("\nel numero ingresado es mayor, vuelva a intentar");
		}if(Ns<Na){
			printf("\nel numero ingresado es menor, vuelva a intentar");
	}
		ContInt=ContInt+1;
	}while(Ns!=Na);
	printf("\nefectivamente, el numero es: %i", Na);
	printf("\nsu numero de intentos a sido de: %i", ContInt);
	getch();
	return 0;
}