#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char v1[15], v2[15], v3[30];
	
	printf("ingrese su primer palabra: ");
	gets(v1);
	printf("\ningrese su segunda palabra: ");
	gets(v2);
	
	strcpy(v3, v1);
	strcat(v3," ");
	strcat(v3, v2);
	
	printf("%s", v3);
	getch();
	return 0;
}	