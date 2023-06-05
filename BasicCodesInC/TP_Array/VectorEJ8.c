#include<stdio.h>
#include<conio.h>

int main(){
	int n[5], i, n2[5], c;
	 
	for(i=0; i < 5; i++){
		 printf("ingrese un numero: ");
		 scanf("%d", &c);
		 
		n[i] = c;
		
		n2[i] = n[i];
    }
	for(i=0; i < 5; i++){
		
		n2[i] = n2[i] * 2;
		
	printf(" %d", n2[i]);
	}
	 getch();
	 return 0;
}