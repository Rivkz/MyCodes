#include<stdio.h>
#include<conio.h>
#include<strings.h>

int main(){
	char n;
	
	printf("ingrese la nota el alumno: ");
	n=getchar();
	
	
	switch(n){
		case 'a':
		case 'A':
		
		puts("\nExcelente");
		
		break;
		case 'b':
		case 'B':
		
		puts("\nNotable ");
		
		break;
		case 'c':
		case 'C':
		
		puts("\nAprobado");
		
		break;
		
		case 'd':
		case 'D':
		case 'f':
		case 'F':
		
		puts("\nReprobo");
}
getch();
return 0;
}