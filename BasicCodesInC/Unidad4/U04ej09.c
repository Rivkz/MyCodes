/*
Calcular el factorial de un número ingresado por teclado.
*/
#include<stdio.h>
#include<conio.h>

int main(){
	int n, i, x = 0, fact=1;
	
	printf("ingresar el numero:");
	scanf("%i", &n);
	
	for(i=1;i<=n;i++){
		
		fact = fact * i;
}

	printf("el resultado factorial es: %i", fact);
	getch();
	return 0;
}