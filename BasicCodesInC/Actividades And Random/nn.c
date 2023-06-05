#include<stdio.h>
#include<conio.h>

int main(){
	int N, i, suma;
	printf("ingrese un numero:");
	scanf("%i", &N);
	suma=1;
	for(i=1;i<=N;i++){
		
		suma=i*suma;
	}
		printf("\n%i", suma);
	getch();
	return 0;
}