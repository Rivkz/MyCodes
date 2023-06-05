#include <stdio.h>
#include <conio.h>

void main(){
	float nota;
	
	printf("nota del alumno: ");
	scanf("%f", &nota);
	
	if (nota>7){
		printf("el alumno esta aprobado\n\n\n");
	}
	else
		if (nota==7){
			printf("el alumno esta aprobado\n\n\n");
}
	else{
		printf("el alumno esta desaprobado\n\n\n");
}
		printf("gracias por registrar las notas");
		getch();
}