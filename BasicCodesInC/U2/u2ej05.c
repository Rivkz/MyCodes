#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
	float numero;
	
	printf("ingrese el numero para sacar si raiz:\n");
	scanf("%f", &numero);
	
	if (numero < 0){
		printf("\n %f tiene raiz imaginaria", numero);
	}
	else{
		numero = sqrt(numero);
		printf("\nla raiz del numero es: %f", numero);
	}
	getch();
}