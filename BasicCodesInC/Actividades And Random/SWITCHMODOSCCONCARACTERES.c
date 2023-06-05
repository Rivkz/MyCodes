#include<stdio.h>
#include<conio.h>

int main (){
	int peaje;
	char automovil;
	printf("Ingrese la inicial de su tipo de vehiculo: ");
	scanf("%i",&automovil);
	
	switch(automovil=getchar()){
		case 'T':
		case 't':
				peaje = 170;
				printf("Turismo $%i",peaje);
				break;	
							
		case 'A': 
		case 'a':		
				peaje = 400;
				printf("Autobus $%i",peaje);
				break;		
						
		case 'M': 
		case 'm':
				peaje= 100;
				printf("Motocicleta $%i",peaje);
				break;
				
		default: printf("Vehiculo no autorizado");
	}
	getch();
	return 0;
}