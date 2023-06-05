#include <stdio.h>
#include <conio.h>
#include <strings.h>
struct Corredor{
	char nombre[30];
	int edad;
	char sexo[10];
	char club[30];
	char categoria[30];
};

int main(){
	struct Corredor Corredor_1;
	
	printf("ingrese el nombre: ");
	scanf("%s", &Corredor_1.nombre);
	
	printf("\ningrese la edad: ");
	scanf("%i", &Corredor_1.edad);
	
	if(Corredor_1.edad<=18){
		strcpy(Corredor_1.categoria, "Juvenil");
	}else{
		
	}if(Corredor_1.edad <= 40){
		strcpy(Corredor_1.categoria, "Señor");
	}else{
		
	}if(Corredor_1.edad>40){
		strcpy(Corredor_1.categoria, "Veterano");
	}else{}
	
	printf("\ningrese el sexo (no sea gracioso y ponga nulo): ");
	scanf("%s", &Corredor_1.sexo);
	
	printf("\ningrese el nombre del club: ");
	scanf("%s", &Corredor_1.club);
	
	printf("\nEl nombre es:%s",Corredor_1.nombre);
	printf("\nLa edad es:%i",Corredor_1.edad);
	printf("\nSu categoria es:%s",Corredor_1.categoria);
	printf("\nEl sexo de la persona es:%s",Corredor_1.sexo);
	printf("\nEl club en el que juega es:%s",Corredor_1.club);
	
	getch();
	return 0;
}