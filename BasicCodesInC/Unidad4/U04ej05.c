/* 
Escriba un programa que lea valores enteros hasta que se introduzca 
un valor en el rango [20-30] o se introduzca el valor 0. 
El programa debe entregar la suma de los valores mayores a 0 introducidos.
Autor: Brian Ezequiel Riveiro
*/
#include<stdio.h>
#include<conio.h>

int main(){
	int n, suma=0;
	
	do{
		printf("imprima un numero:");
		scanf("%i", &n);
		 suma=suma+n;
		if(n<20){
			
		}else
		{if(n<31){
			break;}
			else{}
		}
		
	}while(n!=0);
	
	printf("\n\tla suma de los numeros es:%i", suma);
	getch();
	return 0;
}