/*
Calcular y mostrar la suma de los cuadrados de los primeros 10 números enteros mayores que 0
Autor: Brian Ezequiel Riveiro
*/
#include<stdio.h>
#include<conio.h>
#include<strings.h>

int main(){
	int i, n, cont=0;
	
	for(i=1;i<=10;i++){
		
		cont=cont+1;
		
		n=cont*cont;
		
		printf("\n\n%i", n);
		
	}
	getch();
	return 0;
}