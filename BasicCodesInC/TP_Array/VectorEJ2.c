//Vector ejercicio N°2
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main() {
    int numeros []= { 2, 4, 6, 8, 1};
    int multi=1;
	printf("los numeros de los cuales se hara el producto son: 2, 4, 6, 8 y 1");
    for(int i=0; i<5; i++) {
        multi=multi*numeros[i];
    }
    printf("\nEl producto es:%i", multi);

	getch();
    return 0;
}