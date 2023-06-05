#include <stdio.h>
#include <conio.h>
#include <strings.h>

void main(){
	int entrada, saldo, deposito, extraccion;
	
	printf("seleccione 1 para consultar su saldo, 2 para depositar y 3 para extraer: ");
	
	scanf("%i", &entrada);
	
	saldo = 10000;
	
	switch(entrada){
		case 1:	printf("su saldo es de %i", saldo);
		break;
		case 2: printf("cuando desea depositar:");
				scanf("%i", &deposito);
				deposito = saldo + deposito;
				printf("su nuevo saldo es de: %i", deposito);
		break;
		case 3: printf("cuando desea extraer:");
				scanf("%i", &extraccion);
				saldo = saldo - extraccion;
				printf("su nuevo saldo es de: %i", saldo);
		break;
	}

	getch();
}