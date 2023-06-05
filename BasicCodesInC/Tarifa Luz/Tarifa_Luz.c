#include<stdio.h>
#include<conio.h>
void main(){
	char usuario[10];
	int gasto, tarifa;
	
	printf("ingresar consumo:");
	scanf("%i", &gasto);
	
	if (gasto<1000){
		tarifa=gasto*1.2;
	}
	else
		if(gasto<1850){ 
	tarifa=gasto;
	}
	else
	{
		tarifa=gasto*0.9;
	}
	
	printf(" la tarifa es: %i",tarifa);
	
	printf(" gracias por confiar en nuestro servicio");
	getch();
}		