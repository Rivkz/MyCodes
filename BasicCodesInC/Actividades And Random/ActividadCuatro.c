#include <stdio.h>
#include <conio.h>

void main(){
	int n1, n2;
	
	printf("ingrese el primer numero: ");
	scanf("%i", &n1);
	
	printf("\ningrese el segundo numero: ");
	scanf("%i", &n2);
		
	if (n1 > n2){
		
		printf("\n\n el mayor es %i", n1);
}
	else
		if (n1 < n2){
		
		printf("\n\n el mayor es %i", n2);
}

	getch();	
	}