#include<stdio.h>
#include<conio.h>

int mod(int num1){
	int i;
	for(i=2;num1>1;i++){
		while(num1%i==0){
			printf("*%i", i);
			num1 = num1/i;
	}}
	return i;
}

int main(){
	int n1, n1a, n2, n2a, n3, n3a, n4, n4a;
	printf("\ningrese el primer numero:");
	scanf("%i", &n1);
	printf("\ningrese el segundo numero:");
	scanf("%i", &n2);
	printf("\ningrese el tercer numero:");
	scanf("%i", &n3);
	printf("\ningrese el cuarto numero:");
	scanf("%i", &n4);
	
	
	printf("\nlos comunes divisores de %i son:", n1);
	n1a = mod(n1) ;
	printf("\nlos comunes divisores de %i son:", n2);
	n2a = mod(n2) ;
	printf("\nlos comunes divisores de %i son:", n3);
	n3a = mod(n3) ;
	printf("\nlos comunes divisores de %i son:", n4);
	n4a = mod(n4) ;
	getch();
	return 0;
}