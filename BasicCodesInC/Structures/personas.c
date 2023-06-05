#include <stdio.h>
#include <conio.h>

struct P{
	char nombre[30];
	char apellido[30];
	int edad;
	float estatura;
}persona[3];

int main(){
	int i=0;
	
	for(i=0; i<3; i++){
	
	printf("\ningrese nombre:");
	scanf("%s", &persona->nombre);
	printf("\ningrese apellido:");
	scanf("%s", &persona->apellido);
	printf("\ningrese edad:");
	scanf("%i", &persona->edad);
	printf("\ningrese estatura:");
	scanf("%f", &persona->estatura);
	
	FILE *f;
	f = fopen("personas.txt", "a");
	
	fprintf(f,"%s;%s;%i;%f\n", persona->nombre, persona->apellido, persona->edad, persona->estatura);
	
	fclose(f);
}
	getch();
	return 0;
} 