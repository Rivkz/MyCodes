/*
Hacer un programa que calcule 1-2+3-4+5-6….+n (donde n se ingresa por teclado)
Autor: Brian Ezequiel Riveiro
*/
#include<stdio.h>
#include<conio.h>

int main(){
	int n, resultado, i, nn;
	
	printf("ingrese un numero:");
	scanf("%i", &n);
	
	resultado=0;
	for(i=0;i<=n;i++){
		
		nn = i % 2;
		
		if(nn==0){
			resultado = resultado - i;
		}
		else{
			resultado = resultado + i;
		}
	}
	printf("el resultado es: %i", resultado);
	getch();
	return 0;
}