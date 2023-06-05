#include <stdio.h>
#include <conio.h>

void main(){
	float n1;
	
	printf("ingrese un numero:");
	scanf("%f", &n1);
	
	if (n1 > 0){
		printf("\n\n el numero es positivo");
}
	else
		if (n1 == 0){
		printf("\n\n el numero es positivo");
}
	else
		if (n1 < 0){
		printf("\n\n el numero es negativo");
}
	getch();
}