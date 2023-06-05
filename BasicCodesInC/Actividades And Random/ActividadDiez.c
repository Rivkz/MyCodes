#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	int menu, n1,n2,n;
	
	printf("MENU\nSeleccione 1 si quiere el cubo de un numero\nSeleccione 2 si quiere saber si su numero es par o impar\nSeleccione 3 para salir\nOpcion: ");
	scanf("%i", &menu);
	
	switch(menu){
		case 1:
		printf("\n\n\ningrese el numero del que quiere saber si numero cubico: ");
		scanf("%i", &n1);
		n1 = n1*n1*n1;
		printf("\nel numero es %i", n1);
		break;
		
		case 2:
		printf("\ningrese el numero del que quiere saber si es par o impar: ");
		scanf("%i", &n2);
	
		n=n2%2;
		
		if (n==0){
			printf("\nel numero es par");
		}
	else
		if (n>0){
			printf("\nel numero es impar");
}
		break;
		
		case 3:
		printf("\n\nnos vemos pronto, gracias por su visita!!");
		break;
		
}
getch();
}	