#include <stdio.h>
#include <conio.h>

void main(){
	float n1, n2;
	
	printf("ingrese el primer numero: ");
	scanf("%f", &n1);
	
	printf("\ningrese el segundo numero: ");
	scanf("%f", &n2);
		
	if (n1 > n2){
		
		printf("\n\n el mayor es %f", n1);
}
	else
		if (n1 < n2){
		
		printf("\n\n el mayor es %f", n2);
}

	getch();	
	}