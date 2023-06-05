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

void main(){
	struct Corredor Corredor_1;
	
	printf("ingrese el nombre: ");
	fgets(Corredor_1.nombre, 30, stdin);
	
	printf("\tingrese la edad: ");
	scanf("%i", &Corredor_1.edad);
	
	if(Corredor_1.edad<=18){
		strcpy(Corredor_1.categoria, "Juvenil");
	}else{
		
	}if(Corredor_1.edad <= 40){
		strcpy(Corredor_1.categoria, "Señor");
	}else{
		
	}if(Corredor_1.edad>40){
		stpcpy(Corredor_1.categoria, "Veterano");
	}else{}
	
	printf("\tingrese el sexo(no sea gracioso y ponga nulo: ");
	fgets(Corredor_1.sexo, 10, stdin);
	
	printf("ingrese el nombre del club: ");
	fgets(Corredor_1.club, 30, stdin);
	
	
	getch();
	return 0;
}