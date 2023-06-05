#include<stdio.h>
#include<conio.h>

void main(){
	int tarifa, opcion;
	printf("seleccionar 1 si es turista\nseleccionar 2 si es autobus\nseleccionar 3 si es motocicleta \nseleccionar: ");
	scanf("%i", &opcion);
	
	switch(opcion){
		case 1: 
		printf ("\n\n su tarifa es de $170");
		break;
		case 2:
		printf ("\n\n su tarifa es de $400");
		break;
		case 3:
		printf ("\n\n su tarifa es de $100");
		break;
}
	if(opcion>3){
		printf("\nvehiculo no autorizado");
	}	
	getch();
}