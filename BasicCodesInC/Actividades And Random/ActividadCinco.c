#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
	float numero;
	
	printf("ingrese el numero para sacar si raiz:");
	scanf("%f", &numero);
	
	if (numero < 0){
		printf("\n\n\n el numero %f tiene raiz imaginaria", numero);
	}
	else{
		numero = sqrt(numero);
		printf("\n\n\nla raiz del numero es: %f", numero);
	}
	getch();
}