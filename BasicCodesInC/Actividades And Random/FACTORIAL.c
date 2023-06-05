#include<stdio.h>
#include<conio.h>

int main(){
	int N, i, suma;
	printf("ingrese un numero:");
	scanf("%i", &N);
	suma=1;
	if(N>=100 && N<=1000000){
	for(i=1;i<=N;i++){
		suma=i*suma;
	}
	printf("\n%i", suma);}
	else{
		printf("\neste numero no entra en el rango de 100-1000000");
	}
	getch();
	return 0;
}