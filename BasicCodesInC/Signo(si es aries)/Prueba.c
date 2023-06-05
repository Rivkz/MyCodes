#include <stdio.h>
#include <strings.h>
#include <conio.h>

void main(){
	
	char n[255], s[255];
	
	printf("ingrese nombre:");
	gets(n);
	printf("ingrese signo:");
	gets(s);
	
	if(strcmp(s, "aries")==0){
		printf("usted es %s",s);
	}
	else
	{
		puts("no es aries");
	}
	getch();
}