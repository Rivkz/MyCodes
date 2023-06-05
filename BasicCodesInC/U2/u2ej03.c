#include <stdio.h>
#include <conio.h>

void main(){
	int n1, n2;
	printf("ingrese un numero:");
	scanf("%i", &n1);
	
	n2=n1%2;
	
	if (n2/=0){
		printf("\n\nsu numero es par");
}
	else
	if (n2>0){
		printf("\n\nsu numero es impar");
}
	getch();
}