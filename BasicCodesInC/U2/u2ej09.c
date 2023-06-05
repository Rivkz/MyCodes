#include<stdio.h>
#include<conio.h>
#include<strings.h>

int main(){
	char n;
	
	printf("\t\t\t\t\tingrese la nota el alumno\n\t\t\t\t\t\t");
	n=getchar();
	
	
	switch(n){
		case 'a':
		case 'A':
		
		puts("\n\n\t\t\t\t\t\t Excelente");
		
		break;
		case 'b':
		case 'B':
		
		puts("\n\n\t\t\t\t\t\t Notable ");
		
		break;
		case 'c':
		case 'C':
		
		puts("\n\n\t\t\t\t\t\t Aprobado");
		
		break;
		
		case 'd':
		case 'D':
		case 'f':
		case 'F':
		
		puts("\n\n\t\t\t\t\t\t Reprobo");
}
getch();
return 0;
}