#include<stdio.h>
#include<conio.h>

void main(){
	int mes;
	printf("seleccionar un numero entre 1 y 12 para mostrar su mes: ");
	scanf("%i", &mes);
	
	switch(mes){
		case 1: 
		printf("\n\n\tENERO");
		break;
		case 2: 
		printf("\n\n\tFEBRERO");
		break;
		case 3: 
		printf("\n\n\tMARZO");
		break;
		case 4: 
		printf("\n\n\tABRIL");
		break;
		case 5: 
		printf("\n\n\tMAYO");
		break;
		case 6: 
		printf("\n\n\tJUNIO");
		break;
		case 7: 
		printf("\n\n\tJULIO");
		break;
		case 8: 
		printf("\n\n\tAGOSTO");
		break;
		case 9: 
		printf("\n\n\tSEPTIEMBRE");
		break;
		case 10: 
		printf("\n\n\tOCTUBRE");
		break;
		case 11: 
		printf("\n\n\tNOVIEMBRE");
		break;
		case 12: 
		printf("\n\n\tDICIEMBRE");
		break;
	}
	getch();
}